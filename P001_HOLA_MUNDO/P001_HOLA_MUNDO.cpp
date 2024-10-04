// P001_HOLA_MUNDO.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include <iostream>
#include <math.h>
#include <time.h>
#include <locale.h>
#include <codecvt>
#include <locale.h>
#include <stdio.h>
#include <iomanip>


int main()
{
    //maneras de configular para que soporte ñ y acentos
    setlocale(LC_ALL, "es:MX.UTF-8");
    //\n Es un salto de pagina
    //st::endl
    std::cout << "Hello World!\n";
    //Inciaremos tipos de variables de diferentes tipos
    //tipo nombre = valor asignado de declaracion o instalaciom
    // TIPO GUARDAR ENTEROS REALES
    int Edad = 0;
    std::cout << "Introduzca su edad\n";
    std::cin >> Edad;
    //para guardar buneros  decimales
    float altura = 0;
    std::cout << "Introduzca su altura\n" ;
    std::cin >> altura;
    float Cali = 0;
    std::cout << "Intruduzca su calificacion\n";
    std::cin >> Cali;
    //para guardad everdades y falsedades
    bool d1 = false;
    std::cout << "¿Es usted un humano? 1) Verdadero 0) Falso \n";
    std::cin >> d1;
    std::cout << "Dijiste " << d1 << "\n";
    //Papa raguardar letras
    char sexo;
    std::cout << "Escriba su sexo\n";
    std::cin >> sexo;
    //Para guardae cadenas de caracteres
    char nombre[15];
    std::cout << "por ultimo intoduzca su nombre\n";
    std::cin >> nombre;
    //para guardar numeros realmente extensos
    int num = 0;
    int pot = 0;
    std::cout << "Introduzca dos numeros primero la base y luego la potencia\n";
    std::cin >> num;
    std::cin >> pot;
    double exponencial = pow(num, pot);
    std::cout << "El resultado es " << exponencial << "\n";
    //Suma
    double a = 0;
    double b = 0;
    double suma;
    float resta;
    double mult;
    float div;
    std::cout << "Vamos a hacer operaciones matematicas elija dos numeros que seran sumados, restados, multiplicados, \n";
    std::cout << "y en caso de la division sera divisor y dividendo \n";
    std::cin >> a ;
    std::cin >> b ;
    suma = a + b;
    resta = a - b;
    mult = a * b;
    div = a / b;
    std::cout << "Suma: " << suma << "\n";
    std::cout << "Resta: " << resta << "\n";
    std::cout << "Multiplicacion: " << mult << "\n";
    std::cout << "Divicion: " << div << "\n";

//
//


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
