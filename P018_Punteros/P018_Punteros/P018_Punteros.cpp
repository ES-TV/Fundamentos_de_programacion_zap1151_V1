// P018_Punteros.cpp
//Esteban Chavez Alvarez

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
    int n;
    int m;
    int** matriz1;
    std::cout << "Vamos a crear una Matriz. \n¿De que tamaño desea?\n(Escriba primero cuantas filas y despues las columnas)\n";
    std::cin >> n;
    std::cin >> m;
    matriz1 = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matriz1[i] = new int[m];
    }
    if (n > 3 || m >3)
    {
        for  (int i = 0;  i < n;  i++)
        {
            for (int j = 0; j < m; j++)
            {
                
            }
        }
    }


}

