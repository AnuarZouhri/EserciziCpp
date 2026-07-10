#include "perceptron.h"
#include <random>
#include <vector>



DatasetNormal* generaDataset(int nFeatures, int nSamples) {
    std::mt19937 gen(42); // seed fisso per riproducibilità
    std::uniform_real_distribution<double> dist(-10.0, 10.0);
    double margine = 0.3;

    // retta di verità: x2 = 2*x1 + 1  ->  2*x1 - x2 + 1 = 0
    auto sopra = [](const std::vector<double>& v) {
        double c = 0;
        double bias = 0.5;
        for(size_t i = 0; i < v.size(); i++){
            c += (i % 2)*(v[i]) - 2*(1 - i%2)*v[i];
        }
        return (c + bias) > 0;
    };

    DatasetNormal data;
    std::vector<double> temp;
    int tempLabel;
    for(int i = 0; i < nSamples; i++){
        temp = {};
        tempLabel = 0;
        for(int j = 0; j < nFeatures; j++){
            temp.push_back(dist(gen));
        }
        
        tempLabel = sopra(temp) ? 1 : -1;
        data.samples.push_back({temp, tempLabel});


    }

}

