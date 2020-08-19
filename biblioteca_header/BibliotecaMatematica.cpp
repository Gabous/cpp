#include <iostream>
#include "matematica.h"
#include <tchar.h>

int main()
{
    _tsetlocale(LC_ALL, _T("portuguese"));
    int numero1, numero2;

    std::cout << "\nDigite primeiro numero: ";
    std::cin >> numero1;
    std::cout << "\nDigite segundo numero: ";
    std::cin >> numero2;
    std::cout << "\nResultado Operacoes Matematicas\n";
    std::cout << "\nSoma: " << Soma(numero1, numero2);
    std::cout << "\nSubtração: " << Subtracao(numero1,numero2);
    std::cout << "\nMultiplicação: " << Multiplicacao(numero1,numero2);
    std::cout << "\nDivisao: " << Divisao(numero1,numero2);
    std::cout << "\nPotencia: " << Potencia(numero1, numero2);
    std::cout << "\nRaiz Quadrada: " << RaizQuadrada(numero1);
    system("PAUSE");

    return 0;
}