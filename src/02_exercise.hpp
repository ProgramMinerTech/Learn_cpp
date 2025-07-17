/*
    Escribe la siguiente expresion como en c++
*/
#include <iostream>
#include <string>

int exer02()
{

    float a = 0;
    float b = 0;

    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;

    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;

    float result = (a / b) + 1;
    std::cout.precision(3);

    std::cout << "==========================================================" << std::endl;
    std::cout << "El resultado es: " << result << std::endl;

    return 0;
}