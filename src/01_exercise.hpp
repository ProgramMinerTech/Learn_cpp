
/*
	Realice un programa que lea de la entrada los siguientes datos de una persona:

		- Edad: dato de tipo entero.
		- Sexo: dato de tipo character.
		- Altura (m) : dato de tipo real.

	Tras leer los datos, el programa debe mostrar en la salidad

*/

#include <iostream>
#include <string>


int exer01()
{
	int age = 0;
	char sex[10] = "";
	float height = 0.00;

	std::cout << "Ingrese la edad: ";
	std::cin >> age;

	std::cout << "Ingrese el sexo: ";
	std::cin >> sex;

	std::cout << "Ingrese la altura: ";
	std::cin >> height;

    std::cout << "===============================================================" << std::endl;
	std::cout << "La edad es: " << age << " años de edad" << std::endl;
	std::cout << "El sexo es: " << sex << std::endl;
	std::cout << "La altura es: " << height << " metros" << std::endl;
    std::cout << "===============================================================" << std::endl;

	return 0;
}