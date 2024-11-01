// C006_Arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int edades[3][2] = { {1,2},{9,8},{14,21} };
    int filas = (sizeof(edades) / sizeof(edades[0]));
    std::cout << "edades "<< edades << " edades[0] " << edades[0] << " Filitas " << filas << std::endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    std::cout << columnas << std::endl;
}
