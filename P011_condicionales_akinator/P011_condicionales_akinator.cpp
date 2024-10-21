// P011_condicionales_akinator.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale.h>
#include <math.h>


int main()
{
    bool decision = 0;
    setlocale(LC_ALL, "en_MX.UTF-8");
    std::cout << "Hola soy el Adivino adivinador, piensa en un deporte\n";
    std::cout << "y en seguida te hare preguntas para adivinarlo\n";
    system("pause");
    std::cout << "Su deporte Usa Balon?\n";
    std::cout << "Responda 0) No 1) Si \n";
    std::cin >> decision;
    if (decision == true)
    {
        system("cls");
        decision = 0;
        std::cout << "Su deporte es sobre el agua?\n";
        std::cin >> decision;
        if (decision == true)
        {
            system("cls");
            decision = 0;
            std::cout << "Waterpolo\n";
            std::cin >> decision;
        }
        else
        {
            system("cls");
            decision = 0;
            std::cout << "Se juega con los pies?\n";
            std::cin >> decision;
            if (decision == true)
            {
                system("cls");
                decision = 0;
                std::cout << "Futball\n";
            }
            else
            {
                system("cls");
                decision = 0;
                std::cout << "Hay red dividiendo la cancha?\n";
                std::cin >> decision;
                if (decision == true)
                {
                    system("cls");
                    decision = 0;
                    std::cout << "Voleibol\n";
                }
                else
                {
                    system("cls");
                    decision = 0;
                    std::cout << "Basketball\n";
                }
            }
        }
    }
    else
    {
        system("cls");
        decision = 0;
        std::cout << "Su deporte es de peleas?\n";
        std::cin >> decision;
        if (decision == true)
        {
            system("cls");
            decision = 0;
            std::cout << "Se usan guantes?\n";
            std::cin >> decision;
            if (decision == true)
            {
                system("cls");
                decision = 0;
                std::cout << "Box\n";
            }
            else
            {
                system("cls");
                decision = 0;
                std::cout << "MMA\n";
            }
        }
        else
        {
            system("cls");
            decision = 0;
            std::cout << "Es de resistencia o velocidad?\n";
            std::cin >> decision;
            if (decision == true)
            {
                system("cls");
                decision = 0;
                std::cout << "Es en el agua?\n";
                std::cin >> decision;
                if (decision == true)
                {
                    system("cls");
                    decision = 0;
                    std::cout << "Natacion\n";
                }
                else
                {
                    system("cls");
                    decision = 0;
                    std::cout << "Atletismo\n";
                }
            }
            else
            {
                system("cls");
                decision = 0;
                std::cout << "Baseball\n";
            }
        }
    }
}
