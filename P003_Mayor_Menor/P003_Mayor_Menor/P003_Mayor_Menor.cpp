// P003_Mayor_Menor.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    float a = 0;
    float b = 0;
    std::cout << "Vamos a ver que numero es mayor y menor, Escriba dos numeros \n";
    std::cin >> a;
    std::cin >> b;
    if (a > b)
    {
        std::cout << a << " Es mayor a " << b << "\n";
    }
    else if (a < b)
    {
        std::cout << b << " Es mayor a " << a << "\n";
    }
    else
    {
        std::cout << "Los numeros son iguales \n";
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
