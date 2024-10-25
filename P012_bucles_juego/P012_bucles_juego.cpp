// P012_bucles_juego.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Esteban Chavez Alvarez

#include <iostream>
#include <thread>
#include <chrono>


int main()
{
    using namespace std::chrono_literals;
    int vidas = 3;
    bool cont = 1;
    bool continuar = 0;
    std::cout << "Bienvenido a El Juego\n";
    std::cout << "pulsa enter para entrar\n";
    system("pause");
    while (cont == 1)
    {
        for (vidas = 3; vidas > 0; vidas--)
        {
            std::cout << "Tienes " << vidas << " vidas\n";
            system("pause");
        }
        std::cout << "Desea continuar? 0) No 1) Si\n";
        std::cin >> continuar;
        if (continuar == 1)
        {
            for (int i = 0; i < 100; i++)
            {
                std::cout << i << std::endl;
                std::this_thread::sleep_for(.125s);
            }

        }
        else
        {
            std::cout << "Bye Bye\n";
            cont = 0;
        }

    }
}

