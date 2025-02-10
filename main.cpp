#include <iostream>
#include <vector>
#include <memory> // Para smart pointers
#include "NeuronioReLU.hpp"

using namespace std;

int main() {
    // Caso 1
    vector<double> entradas1 = {0.3, 2.0};
    vector<double> pesos1 = {0.2, 0.4};
    double bias1 = -1.5;

    // Caso 2
    vector<double> entradas2 = {0.3, 2.0};
    vector<double> pesos2 = {0.2, 0.4};
    double bias2 = -0.5;

    // Criação dos objetos NeuronioReLU
    NeuronioReLU neuronio1(pesos1, bias1);
    NeuronioReLU neuronio2(pesos2, bias2);

    // Cálculo e exibição das saídas
    double saida1 = neuronio1.predict(entradas1);
    double saida2 = neuronio2.predict(entradas2);

    // Exibição dos resultados
    cout << "Caso 1:" << endl;
    cout << "Entradas: [0.3, 2.0]" << endl;
    cout << "Pesos: [0.2, 0.4]" << endl;
    cout << "Bias: -1.5" << endl;
    cout << "Saída: " << saida1 << endl;

    cout << endl;

    cout << "Caso 2:" << endl;
    cout << "Entradas: [0.3, 2.0]" << endl;
    cout << "Pesos: [0.2, 0.4]" << endl;
    cout << "Bias: -0.5" << endl;
    cout << "Saída: " << saida2 << endl;

    return 0;
}
