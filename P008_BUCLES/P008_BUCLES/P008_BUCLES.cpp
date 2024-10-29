// P008_BUCLES.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>

int main()
{
    bool conti = 1;
    int answ = 0;
    std::cout << "Esta apunto de entrar en bucles\n";
    std::cout << "En que bucle quiere entrar? 1) while 2) do while 3) for\n";
    std::cin >> answ;
    switch (answ)
    {
    case 1:
        while (conti)
        {
            system("cls");
            std::cout << "Usted esta en un bucle, desea continuar?\n";
            std::cout << "0) NO 1) SI\n";
            std::cin >> conti  ;
        }
        break;
    case 2:
        do
        {
            system("cls");
            std::cout << "Usted esta en un bucle, desea continuar?\n";
            std::cout << "0) NO 1) SI\n";
            std::cin >> conti;
        } while (conti);
    case 3:
        std::cout << "Este contador se hara 10 veces \n";
        for (int i = 0; i < 10; i++)
        {
            std::cout << "Vamos en " << i << " \n";
            system("pause");
        }
        break;
    default:
        std::cout << "No se encuentra respuesta\n";
        break;
    }
}

