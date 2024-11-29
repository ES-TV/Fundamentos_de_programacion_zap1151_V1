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
	int desicion3 = 0;
	std::string nombre;
	std::cout << "Welcome to the Mashine\nPor favor ecriba su nombre, que sea epico!\n";
	std::getline(std::cin, nombre);
	std::cout << "Maravilloso " << nombre << ". Te doy la bienvenida a la base de espacial GalaxyCross\n";
	std::cout << "la maquina de transporte mas grandre y rapida de la Via Lactea\n";
	std::cout << "Mi nombre es Santiago, Santi, tiago, Chanti, Yago. Y soy el Teniente\n";
	std::cout << "Estamos en una exploracion para estudiar de cerca el agujero negro supermasivo\n";
	std::cout << "Sagitario A*\n";
	std::cout << "Es de mi agrado comunicarle que debido a un infarto espacial el capitan ha muerto y ahora tu eres nuestro nuevo lider\n";
	std::cout << "Asi que le actualizo\nEncontramos una estrella a docientos años luz con ningun planeta orbitando\nPor otro lado tenemos un pequeño sistema a cruzando dos estrellas màs\n";
	std::cout << "Por lo que tenemos dos opciones\n1) Revisar a ver si uno de los planetas tiene recursos para la nave\n2) intentar deborar la estrella paraq conseguir energia\n";
	std::cout << "Que desea hacer capitan?\n";
	std::cin >> desicion1;
	switch (desicion1)
	{
	case 1:
		std::cout << "Muy bien capitan activemos velocidad interestelar!!!\n";
		std::cout << "pssshhh vvvuuuuuuuu fiuuumm\n";
		std::cout << "...\n";
		std::cout << "Capitanazo!! Hemos llegado a un sistema "
	default:
		break;
	}
}

