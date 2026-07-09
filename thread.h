#ifndef THREAD_H
#define THREAD_H

#include <string>
#include <thread>
#include <mutex>
#include <iostream> 
#include <list>
#include <condition_variable>


void printMessage(const std::string& message, int threadID);
void producer(int value);
void consumer();

#endif