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
	int desicion1 = 0;
	int desicion2 = 0;
	int dplanetas = 0;
	int desicion3 = 0;
	std::string nombre;
	std::cout << "  Welcome to the Mashine\n  Por favor ecriba su nombre\n";
	std::getline(std::cin, nombre);
	std::cout << "  Maravilloso " << nombre << ". Te doy la bienvenida a la base de espacial GalaxyCross\n";
	std::cout << "  La maquina de transporte mas grandre y rapida de la Via Lactea\n";
	std::cout << "  Mi nombre es Santiago, Santi, tiago, Chanti, Yago. Y soy el Teniente\n";
	std::cout << "  Estamos en una exploracion para estudiar de cerca el agujero negro supermasivo\n";
	std::cout << "  Sagitario A*\n";
	std::cout << "  Es de mi agrado comunicarle que debido a un infarto espacial el capitan ha muerto y ahora tu eres nuestro nuevo lider\n";
	std::cout << "  Asi que le actualizo\n  Encontramos una estrella a docientos años luz con ningun planeta orbitando\n  Por otro lado tenemos un pequeño sistema a cruzando dos estrellas màs\n";
	std::cout << "  Por lo que tenemos dos opciones\n  1) Revisar a ver si uno de los planetas tiene recursos para la nave\n  2) intentar deborar la estrella para conseguir energia\n";
	std::cout << "  Que desea hacer capitan?\n";
	std::cin >> desicion1;
	switch (desicion1)
	{
	case 1:
		std::cout << "  Muy bien capitan activemos salto de vortice interestelar!!!\n";
		std::cout << "  pssshhh vvvuuuuuuuu fiuuumm\n";
		std::cout << "  ...\n";
		std::cout << "  Capitanazo!! Hemos llegado a un sistema ";
		std::cout << "  Hemos encontrado 3 planetas con que puden tener buenos recursos:\n  1) E404 - El cual se detecta una gran atmosfera con un nucleo que puede servir para el salto de vortice\n";
		std::cout << "  2)  Ftal ERR - Atmosfera rica en O2 y La superficie parece que es liquida\n  Adonde vamos?\n" ;
		std::cin >> dplanetas; 
		std::cout << " ";
		break;
	case 2:
		break;

	default:
		break;
	}
}

