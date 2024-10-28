// examen.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    bool sin1 = 0;
    bool sin2 = 0; 
    bool sin3 = 0;
    std::cout << "Buen dia usted pesenta los siguientes sintomas? 0) No 1) Si\n";
    std::cout << "Fiebre?\n";
    std::cin >> sin1;
    std::cout << "Tos seca?\n";
    std::cin >> sin2;
    std::cout << "Dificultades para respirar?\n";
    std::cin >> sin3;
    if (sin1 && sin2 && sin3)
    {
        std::cout << "Vaya al hospital\n";
    }
    else if (sin1 && sin2 || sin1 && sin3 || sin2 && sin3)
    {
        std::cout << "Quédate en tu casa\n";
    }
    else if (sin1 || sin2 || sin3)
    {
        std::cout << "Puede ser solo gripa\n";
    }
    else
    {
        std::cout << "Usted está sano\n";
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
