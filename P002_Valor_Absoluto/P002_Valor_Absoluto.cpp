// P002_Valor_Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <codecvt>
#include <locale.h>
#include <stdio.h>

int main()
{
    int num = 0;
    int valor = 0;
    std::cout << "Veremos el valor aboluto de cualquier numero. Elige uno\n";
    std::cin >> num;
    if (num >= 0) 
    { 
        std::cout << "El resultado es: " << num << "\n"; 
    }
    else
    {
        valor = num * (-1);
        std::cout << "El resultado es: " << valor << "\n";
    }
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
