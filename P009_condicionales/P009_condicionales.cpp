// P009_condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Esteban Chavez Alvarez

#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    float num1;
    float num2;
    float suma;
    float resta;
    double mult;
    float div;
    int valab;
    double pot;
    int op = 0;
    bool continuar;
    std::cout << "Bienvenidos a la super Calculadora\n";
    std::cout << "Elige una de estas operaciones:\n";
    std::cout << "1) Suma\n";
    std::cout << "2) Resta\n";
    std::cout << "3) Multiplicacion\n";
    std::cout << "4) Division\n";
    std::cout << "5) Valor absoluto\n";
    std::cout << "6) Mayor menor que\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
        system("cls");
        system("Color 1e");
        std::cout << "Escriba los numeros para la suma:\n";
        std::cin >> num1;
        std::cin >> num2;
        suma = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << suma;
        break;
    case 2:
        system("cls");
        system("Color 2e");
        std::cout << "Escriba los numeros para la resta:\n";
        std::cin >> num1;
        std::cin >> num2;
        resta = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << resta;
        break;
    case 3:
        system("cls");
        system("Color 4e");
        std::cout << "Escriba los numeros para la Multiplicacion:\n";
        std::cin >> num1;
        std::cin >> num2;
        mult = num1 * num2;
        std::cout << num1 << " x " << num2 << " = " << mult;
        break;
    case 4: 
        system("cls");
        system("Color 5e");
        std::cout << "Escriba los numeros para la Division:\n";
        std::cin >> num1;
        std::cin >> num2;
        div = num1 / num2;
        std::cout << num1 << " / " << num2 << " = " << div;
        break;
    case 5:
        system("cls");
        system("Color 7c");
        std::cout << "Escriba el numero para ver su Valor Absoluto\n";
        std::cin >> num1;
        if (num1 <= 0)
        {
            valab = num1 * (-1);
            std::cout << "Valor Absoluto = " << valab;
        }
        else
        {
            std::cout << "Valor Absoluto = " << num1;
        }
        break;
    case 6:
        system("cls");
        system("Color 8a");
        std::cout << "Escriba dos numeros a ver cual es Mayor y cual Menor\n";
        std::cin >> num1;
        std::cin >> num2;
        if (num1 > num2)
        {
            std::cout << num1 << " > " << num2;
        }
        else if (num2 > num1)
        {
            std::cout << num2 << " > " << num1;
        }
        else
        {
            std::cout << num1 << " = " << num2;
        }
        break;
    }
}

