// Proyecto_Narracion.cpp : 
//EstebanChávez Álvarez

#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
#include <locale.h>
#include <locale>
#include <Windows.h>
#include <time.h> 

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	srand(time(NULL));
	int dado = 0;
	std::string nombre;
	std::cout << "Welcome to the Mashine\nPor favor ecriba su nombre, que sea epico!\n";
	std::getline(std::cin, nombre);
	std::cout << "Maravilloso " << nombre << ". Te doy la bienvenida a la base de espacial GalaxyCross\n";
	std::cout << "la maquina de transporte mas grandre y rapida de la Via Lactea\n";
	std::cout << "Estamos en una exploracion para estudiar de cerca el agujero negro spermasivo\n";
	std::cout << "Sagitario A*";
}

