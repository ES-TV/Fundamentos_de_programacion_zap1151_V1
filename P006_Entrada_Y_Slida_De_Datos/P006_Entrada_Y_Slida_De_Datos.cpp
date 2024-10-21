// P006_Entrada_Y_Slida_De_Datos.cpp 
//Esteban Chavez

#include <iostream>
#include <locale>
#include <string>

int main()
{
    setlocale(LC_ALL, "en-US");
    std::string mail_user;
    std::string user_user;
    std::string pw_user;
    std::string mail = "a@a.com";
    std::string pw = "Potacio123";
    std::string user = "stv";
    bool mayor_edad = false;
    std::cout << "Bienvenidos al SpaceXXX el videojuego\n";
    std::cout << "Es acaso usted es mayor de 18? 0) No 1) Si \n";
    std::cin >> mayor_edad;
    if (mayor_edad == true)
    {
        std::cout << "Ingrase su nombre: \n";
        std::cin.ignore();
        getline(std::cin,user_user);
        if (user_user == user)
        {
            std::cout << "Ingrese su contraseña\n";
            std::getline(std::cin, pw_user);
            if (pw_user == pw)
            {
                std::cout << "Te damos la bienvenida a la experiencia mas inmersiva de los videojuegos \n";
            }
            else
            {
                std::cout << "Esa no el la contraseña >:v\n";
            }
        }
        else
        {
            std::cout << "Ese no es el usuario >:0\n";
        }
     }
    else
    {
        std::cout << "Este no es lugar para chiquitines UwU \n";
    }
}