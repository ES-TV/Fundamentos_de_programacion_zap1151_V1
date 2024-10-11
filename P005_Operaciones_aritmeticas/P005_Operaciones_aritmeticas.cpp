// P005_Operaciones_aritmeticas.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <math.h>

int main()
{
    float num_1 = 0;
    float num_2 = 0;
    int op = 0;
    double suma;
    float resta;
    double mult;
    float div;
    double pot;
    setlocale(LC_ALL, "en_MX.UTF-8");
    std::cout << "vamos a realizar un poco de matematics\n";
    std::cout << "Escriba dos numeros que se usaran en las operaciones\n";
    std::cin >> num_1;
    std::cin >> num_2;
    std::cout << "que operacion de sea ralizar?\n";
    std::cout << "1) Suma 2) Resta 3) Multiplicacion 4) Division 5) Potencias\n";
    std::cin >> op;
    switch (op)
    {
    case 1:
        suma = num_1 + num_2;
        std::cout << "La suma de " << num_1 << " + " << num_2 << " = " << suma;
        break;
    case 2:
        resta = num_1 - num_2;
        std::cout << "La resta de " << num_1 << " - " << num_2 << " = " << resta;
        break;
    case 3:
        mult = num_1 * num_2;
        std::cout << "La multiplicacion de " << num_1 << " x " << num_2 << " = " << mult;
        break;
    case 4:
        div = num_1 / num_2;
        std::cout << "La division de " << num_1 << "/" << num_2 << " = " << div;
        break;
    case 5:
        pot = pow(num_1, num_2);
        std::cout << "La potencia de " << num_1 << "^" << num_2 << " = " << pot;
        break;
    }
    

}