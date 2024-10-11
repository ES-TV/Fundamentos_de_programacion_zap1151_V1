// P006_Entrada_Y_Slida_De_Datos.cpp 
//Esteban Chavez

#include <iostream>
#include <locale>
#include <string>

int main()
{
    std::string mail_user;
    std::string user_user;
    std::string pw_user;
    std::string mail = "a@a.com";
    std::string pw = "Potacio123";
    std::string user = "stv";
    bool mayor_edad = 0;
    std::cout << "Bienvenidos al SpaceXXX el videojuego";
    std::cout << "Es acaso usted es mayor de 18? 0) No 1) Si \n";
    std::cin >> mayor_edad;
    if (mayor_edad == true)
    {
        std::cout << "Ingrase su nombre: \n";
        std::cin >> user_user;
    }

    
}