#ifndef NEURONIO_RELU_HPP
#define NEURONIO_RELU_HPP

#include "Neuronio.hpp"

class NeuronioReLU : public Neuronio {
public:
    NeuronioReLU(const vector<double>& pesos, double bias)
        : Neuronio(pesos, bias) {}

    double predict(const vector<double>& entradas) const override {
        if (entradas.size() != pesos.size()) {
            cerr << "Erro: o número de entradas deve ser igual ao número de pesos." << endl;
            return 0.0;
        }

        double soma = bias;
        for (size_t i = 0; i < entradas.size(); ++i) {
            soma += entradas[i] * pesos[i];
        }

        return max(0.0, soma);
    }
};

#endif // NEURONIO_RELU_HPP
