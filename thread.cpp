#include "thread.h"

std::mutex consoleMutex;
std::mutex mtx;

std::condition_variable cond_var;
std::list<int> buffer;
const unsigned int SIZE = 10;



void printMessage(const std::string& message, int threadID){
        for(int i = 0; i < 5; i++){
            std::lock_guard<std::mutex> lock(consoleMutex);
            std::cout<<"Thread "<<threadID<<" : " <<message<<"(iteration: " <<i<<")"<<std::endl;
        }
}

void producer(int value){
    int i = 0;
    while(1){
        std::unique_lock<std::mutex> lock(mtx);
        cond_var.wait(lock, [] { return buffer.size() < SIZE;});

        std::cout<<"Prodotto: "<<value + i<<std::endl;
        buffer.push_back(value + i);
        std::cout<<"Buffer size adesso: "<<buffer.size()<<std::endl;
        i++;
        lock.unlock();
        cond_var.notify_one();
        
    }

}


void consumer() { // Defines the consumer function
    while(1){
        std::unique_lock<std::mutex> lock(mtx); // Locks the mutex before accessing the buffer
        cond_var.wait(lock, [] { return buffer.size() > 0; }); // Waits if the buffer is empty

        int value = buffer.front(); // Gets the value from the front of the buffer
        buffer.pop_front(); // Removes the value from the buffer
        std::cout << "Consuming " << value << std::endl; // Prints the consumed value
        std::cout << "Buffer size after consuming: " << buffer.size() <<std::endl; // Prints the buffer size after consuming

        lock.unlock(); // Unlocks the mutex
        cond_var.notify_one(); // Notifies one waiting thread
    }
}