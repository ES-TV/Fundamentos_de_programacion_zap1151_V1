// P017_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

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
    srand(time(NULL));
    int matriz3[3][3];
    int matriz5[5][5];
    int matriz10[10][10];
    int op = 0;
    std::cout << "Vamos a ver matrizes.\nEliga una opcion\n1) 3x3\n2) 5x5\n3) 10x10\n";
    std::cin >> op;

    do
    {
        switch (op)
        {
        case 1:

            break;
        case 2: 
            break;
        case 3:
            break;
        default:
            std::cout << "Elige bien";
            break;
        }
    } while (true);
    switch (op)
    {
    default:
        std::cout << "Elige bien";
        break;
    }
}
