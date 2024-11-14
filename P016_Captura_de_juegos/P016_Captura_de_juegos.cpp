// P016_Captura_de_juegos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Esteban Chavez Alvarez

#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
#include <locale.h>
#include <locale>
#include <Windows.h>


int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    std::string titulo[3];
    int anio[3];
    std::string autor[3];
    std::string company[3];
    std::cout << "Vamos a registrar nuestros juegos favoritos que genial\n";
    for (int i = 0; i <=2; i++)
    {
        std::cout << "Nombre del juego #" << i + 1 << std::endl;
        std::getline(std::cin, titulo[i]);
        std::cout << "Año de publicacion del juego #" << i + 1 << std::endl;
        std::cin >> anio[i];
        std::cout << "Autor del juego #" << i + 1 << std::endl;
        std::cin.ignore();
        std::getline(std::cin, autor[i]);
        std::cout << "Estudio del juego #" << i + 1 << std::endl;
        std::getline(std::cin, company[i]);
    }
    system("pause");
    for (int i = 0; i <= 3; i++)
    {
        std::cout << "Juego #" << i + 1 << std::endl;
        std::cout << titulo[1] << std::endl;
        std::cout << "año " << anio[i] << std::endl;
        std::cout << "Autor: " << std::endl;
        std::cout << "Desarrollado por: " << std::endl;
    }
    
}


