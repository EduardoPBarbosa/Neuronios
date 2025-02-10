#ifndef NEURONIO_HPP
#define NEURONIO_HPP

#include <vector>
#include <iostream>
#include <algorithm> // Para a função std::max

using namespace std;

class Neuronio {
protected:
    vector<double> pesos;
    double bias;

public:
    Neuronio(const vector<double>& pesos, double bias)
        : pesos(pesos), bias(bias) {}

    virtual double predict(const vector<double>& entradas) const = 0;

    virtual ~Neuronio() {}
};

#endif // NEURONIO_HPP
