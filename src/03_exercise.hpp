/*
    Escribe la siguiente expresión matemática como expresión en c++
*/

#include <iostream>
#include <string>

int exer03()
{

    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;

    std::cout << "==============================================================" << std::endl;
    std::cout << "Ingrese a: ";
    std::cin >> a;
    std::cout << "Ingrese b: ";
    std::cin >> b;
    std::cout << "Ingrese c: ";
    std::cin >> c;
    std::cout << "Ingrese d: ";
    std::cin >> d;

    float f = (a + b) / (c + d);
    std::cout.precision(3);
    std::cout << "El resultado es: " << f << std::endl;

    return 0;
}