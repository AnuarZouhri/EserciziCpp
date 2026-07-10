#ifndef PERCEPTRON_H
#define PERCEPTRON_H

#include <vector>


struct Sample{

    std::vector<double> features;
    int label;

};

struct DatasetNormal{

    std::vector<Sample> samples;

};

DatasetNormal* generaDataset(int nFeatures, int nSamples);


class Perceptron{

    private:
        int perceptronId;
        int nFeatures;
        std::vector<double> weights;

    public:
        Perceptron(int n);
        ~Perceptron();

        void updateWeights();
        void printWeights();
        

};




#endif