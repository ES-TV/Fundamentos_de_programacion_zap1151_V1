// P010_CONDICIONALES_LOGIN.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <locale>
#include <string>
#include <cctype>

int main()
{
    setlocale(LC_ALL, "en_MX.UTF-8");
    int contador = 3;
    int contador2 = 3;
    std::string user = "Banano";
    std::string pw = "Bananas123";
    std::string ent_pw;
    std::string ent_user;
    std::cout << "Bienvenidos a email\n";
    while(contador >= 0)
    {
        std::cout << "Introduzca su Usuario\n";
        std::getline(std::cin, ent_user);
        system("cls");
        if (ent_user == user)
        {
            while (contador2 >= 0)
            {
                std::cout << "Introduzca su password\n";

                std::getline(std::cin, ent_pw);
                system("cls");
                if (ent_pw == pw)
                {
                    std::cout << "Le damos la bienvenida a su perfil\n";
                    contador2 = 0;
                }
                else
                {
                    std::cout << "Contraseña Erronea\n";
                    std::cout << "Te quedan " << contador2 << " intentos\n";
                    contador2--;
                }
            }
            contador = 0;
        }
        else
        {
            std::cout << "No se encuentra usuario\n";
            std::cout << "Te quedan " << contador << " intentos\n";
            contador--;
        }
    } 
}


