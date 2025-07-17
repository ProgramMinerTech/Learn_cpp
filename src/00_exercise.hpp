/*
	Escribe un programa que lea la entrada estandar el precio de un producto y muestre en la salida estandar el
	precio del producto al aplicarle el IGV.
*/

#include <iostream>
#include <string>

int exer00()
{
	std::string product = "";
	float cost = 0;
	const float IGV = 0.16;
	const float IPM = 0.02;

	std::cout << "Ingrese el nombre del producto: ";
	std::cin >> product;

	std::cout << "Ingrese el costo del producto: $ ";
	std::cin >> cost;

	float final_cost = cost + (cost * IGV * IPM) * 100;

	std::cout << "===============================================================" << std::endl;
	std::cout << "El producto es: " << product << std::endl;
	std::cout << "El costo del producto es: $" << cost << std::endl;
	std::cout << "El costo final es: $" << final_cost << std::endl;
	std::cout << "===============================================================" << std::endl;

	return 0;

}

