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
    bool seguir = 1;
    do
    {
        std::cout << "Vamos a ver matrizes.\nEliga una opcion\n1) 3x3\n2) 5x5\n3) 10x10\n";
        std::cin >> op;
        switch (op)
        {
        case 1:
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    matriz3[i][j] = rand() % 9 +1;
                }
            }
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    std::cout << "|" << matriz3[i][j] << "|";
                }
                std::cout << "\n";
            }
            seguir = 0;
            break;
        case 2: 
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    matriz5[i][j] = rand() % 9 + 1;
                }
            }
            for (int i = 0; i < 5; i++)
            {
                for (int j = 0; j < 5; j++)
                {
                    std::cout << "|" << matriz5[i][j] << "|";
                }
                std::cout << "\n";
            }
            seguir = 0;
            break;
        case 3:
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    matriz10[i][j] = rand() % 9 + 1;
                }
            }
            for (int i = 0; i < 10; i++)
            {
                for (int j = 0; j < 10; j++)
                {
                    std::cout << "|" << matriz10[i][j] << "|";
                }
                std::cout << "\n";
            }
            seguir = 0;
            break;
        default:
            std::cout << "Elige bien";
            break;
        }
    } while (seguir);
}
