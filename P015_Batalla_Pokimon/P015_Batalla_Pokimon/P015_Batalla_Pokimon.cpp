// P015_Batalla_Pokimon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Esteban Chavez Alvarez

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>

int main()
{
    int pokemon;
    bool des = 1;
    int enemy = 0;
    int dng = 0;
    int deg = 0;
    int dnt = 0;
    int det = 0;
    std::cout << "Hola Soy el Profesor Oak\nTe tengo un regalo\n''Aabres el regalo y cotiene 3 pokeballs''\ncual elijes?\n";
    do
    {
        std::cout << "1) Charmander\n2) Bulbasaur\n3) Squirtle\n";
        std::cin >> pokemon;
        switch (pokemon)
        {
        case 1:
            std::cout << "Que mainstream pero va!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause");
            system("cls");
            std::cout << "Vas a la hierbita y te sale algo...\n";
            enemy = rand() % 2;
            switch (enemy)
            {
            case 0;
                std::cout << "Te has encontrado con un charmander\n";
                std::cout << "Que deseas hacer?\n1) Pelear\n2) huir\n";


            }
            system("pause");
            break;
        case 2:
            std::cout << "Que pesima eleccion pero es tu juego xd!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause");
            std::cout << "Vas a la hierbita y te sale algo...\n";
            break;
        case 3:
            std::cout << "Que aguado pero esta bien te la paso!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause");
            std::cout << "Vas a la hierbita y te sale algo...\n";
            break;
        default:
            std::cout << "Elije bien la opcion paro\n";
            system("pause");
            break;
        }
        system("cls");
    } while (des);
    
}


