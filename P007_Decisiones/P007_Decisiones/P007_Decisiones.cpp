// P007_Decisiones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    int players = 0;
    bool conti = 1;
    std::cout << "Well come to the Royal RRRRRRRuuuumble\n";
    std::cout << "Teienes que cumplir 3 condiciones para una batalla justa:\n";
    std::cout << "Que sea un torneo mayor a 4, menor que 12 (sorry), que la cantidad de jugadores se par\n";
    do
    {
        std::cout << "Cuantos jugadores desea?\n";
        std::cin >> players;
        switch (players)
        {
        case 4:
            system("cls");
            std::cout << "Tenemos \nEquipo 1 \nEquipo 2 \nEquipo 3\nEquipo 4\n;

            break;
        case 6:
            system("cls");
            break;
        case 8:
            system("cls");
            break;
        case 10:
            system("cls");
            break;
        case 12:
            system("cls");
            break;
        default:
            std::cout << "Ese no es un torneo justo lo siento bai\n";
            break;
        }
        std::cout << "Desea continuar? 0)NO 1)SI\n";
        std::cin >> conti;
    } while (conti);
}

