// P004_Consultorio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "en-US");
    std::string nombre;
    std::string apellido;
    bool sexo = 0;
    char enfermo;
    bool med = 0;
    int edad = 0;
    double pago = 0;
    float cambio;
    bool efectivo;
    std::cout << "Bienvenidos al conultorio de Doc\n";
    std::cout << "Favor de Introducir su Nombre: \n";
    std::getline(std::cin, nombre);
    std::cout << "Favor de Introducir su Apellido: \n";
    std::getline(std::cin, apellido);
    std::cout << "Sexo \n";
    std::cout << "0) femenino 1) masculino\n";
    std::cin >> sexo;
    std::cout << "Introduzca su edad:\n";
    std::cin >> edad;
    std::cout << "Se siente usted enfermo? s o n \n";
    std::cin >> enfermo;
    if (enfermo == 's')
    {
        std::cout << "Tomese paracetamol una el la mañana y otra en la noche\n";
        std::cout << "la consulta seran 69.69 pesos\n";
        std::cout << "Como sera su pago? 0) tarjeta o 1) efectivo\n";
        std::cin >> efectivo;
        if (efectivo == true)
        {
            std::cout << "introduzca el monto con el que va a pagar aceptamos todos los billetes y monedas\n";
            std::cin >> pago;
            cambio = pago - 69.69;
            std::cout << "Tenga su cambio de " << cambio << " pesos\n";
        }
        else
        {
            std::cout << "piip puup pip\n";
            std::cout << "pago realizado muchas gracias";
        }
    }
    else
    {
        std::cout << "Entonces para que vino? xddddd";
    }
}
