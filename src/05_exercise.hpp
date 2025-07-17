/*
    Escribe la siguien expresion en c++
*/

#include <iostream>

int exer05()
{
    float a = 0.00;
    float b = 0.00;
    float c = 0.00;
    float d = 0.00;


    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;
    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;
    std::cout << "Ingrese el valor de c: ";
    std::cin >> c;
    std::cout << "Ingrese el valor de d: ";
    std::cin >> d;

    float equation = a + (b / (c - d));
    std::cout.precision(3);

    std::cout << "El resultado de la operacion es: " << equation << std::endl;

    return 0;
}