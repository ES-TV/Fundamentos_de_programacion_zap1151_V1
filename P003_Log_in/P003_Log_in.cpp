// P003_Log_in.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "en-US");
    std::cout << "HOLA! Inicia sesion en tu perfil \n";
    std::string apodo = "Banano";
    std::string apodo_user;
    std::string pass = "Potacio123";
    std::string pass_user;
    std::cout << "Ingrese su usuario: \n";
    std::getline(std::cin, apodo_user);
    if (apodo == apodo_user)
    {
        std::cout << "Ahora ingrese contraseña: \n";
        std::getline(std::cin, pass_user);
        if (pass == pass_user)
        {
            std::cout << "Felicidades ha usted entrado \n";
        }
        else
        {
            std::cout << "Impostor!! \n";
        }
    }
    else
    {
        std::cout << "Ni idea quien seas bro";
    }
    int opcion;
    std::cout << "Que desea usted el dia de hoy? \n";
    std::cout << "1) Entrenar, 2) Salir, 3) bañar \n";
    std::cin >> opcion;
    switch (opcion)
    {
    case 1:
        std::cout << "Dale campeon 5km tu puedes\n";
        break;
    case 2:
        std::cout << "Tienes cita con Dua Lipa, eres un tigre raar \n";
        break;
    case 3:
        std::cout << "Tallese bien y guardame el agua \n";
            break;
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
