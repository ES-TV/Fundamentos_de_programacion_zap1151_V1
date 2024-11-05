// P015_Batalla_Pokimon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Esteban Chavez Alvarez

#include <iostream>
#include <locale>
#include <string>
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(NULL));
    int pokemon;
    bool des = 1;
    int enemy = 0;
    int dng = 0;
    int deg = 0;
    int dnt = 0;
    int det = 0;
    bool act = 0;
    int actenemy;
    int att;
    int vida = 50;
    int vidaenemy = 50;
    std::cout << "Hola Soy el Profesor Oak\nTe tengo un regalo\n''Aabres el regalo y cotiene 3 pokeballs''\ncual elijes?\n";
    do
    {
        std::cout << "1) Charmander\n2) Bulbasaur\n3) Squirtle\n";
        std::cin >> pokemon;
        switch (pokemon)
        {
        case 1:
            system("cls");
            std::cout << "Que mainstream pero va!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause");
            system("cls");
            std::cout << "Vas a la hierbita y te sale algo...\n";
            enemy = rand() % 2;
            switch (enemy)
            {
            case 0:
                system("cls");
                std::cout << "Te has encontrado con un Geodude\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Geodude: " << vidaenemy << " Vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ascuas\n";
                    std::cin >> att; 
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy==1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy <= 0 || vida <= 0);
            case 1:
                system("cls");
                std::cout << "Te has encontrado con un oddish\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                system("cls");
                do
                {
                    system("cls");
                    std::cout << "Oddish: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ascuas\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            case 2:
                system("cls");
                std::cout << "Te has encontrado con un hitmonlee\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Hitmonlee: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ascuas\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            }
            system("pause");
            break;
        case 2:
            std::cout << "Que pesima eleccion pero es tu juego xd!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause");
            std::cout << "Vas a la hierbita y te sale algo...\n";
            enemy = rand() % 2;
            switch (enemy)
            {
            case 0:
                system("cls");
                std::cout << "Te has encontrado con un Geodude\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Geodude: " << vidaenemy << " Vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ramadura\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy <= 0 || vida <= 0);
            case 1:
                system("cls");
                std::cout << "Te has encontrado con un oddish\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                system("cls");
                do
                {
                    system("cls");
                    std::cout << "Oddish: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ramadura\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            case 2:
                system("cls");
                std::cout << "Te has encontrado con un hitmonlee\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Hitmonlee: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) Ramadura\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            }
            system("pause");
            break;
            
        case 3:
            std::cout << "Que aguado pero esta bien te la paso!\n";
            std::cout << "Anda sal por ahi a cazar pokimons\n";
            system("pause"); 
            std::cout << "Vas a la hierbita y te sale algo...\n";
            enemy = rand() % 2;
            switch (enemy)
            {
            case 0:
                system("cls");
                std::cout << "Te has encontrado con un Geodude\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Geodude: " << vidaenemy << " Vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) chisguetazo\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy <= 0 || vida <= 0);
            case 1:
                system("cls");
                std::cout << "Te has encontrado con un oddish\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                system("cls");
                do
                {
                    system("cls");
                    std::cout << "Oddish: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) Arañazo\n2) chisguetazo\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            case 2:
                system("cls");
                std::cout << "Te has encontrado con un hitmonlee\n";
                std::cout << "Que deseas hacer?\n0) huir\n1) Pelear\n";
                std::cin >> act;
                do
                {
                    system("cls");
                    std::cout << "Hitmonlee: " << vidaenemy << " vida\n";
                    std::cout << "Charmander " << vida << " Vida";
                    std::cout << "que deseas hacer?\n1) \n2) chisguetazo\n";
                    std::cin >> att;
                    switch (att)
                    {
                    case 1:
                        dng = 1 + rand() % 5;
                        vidaenemy = vidaenemy - dng;
                        std::cout << "-" << dng << std::endl;
                        system("pause");
                        break;
                    case 2:
                        deg = 1 + rand() % 5;
                        vidaenemy = vidaenemy - deg;
                        std::cout << "-" << deg << std::endl;
                        system("pause");
                        break;
                    default:
                        std::cout << "Elije bien joder\n";
                        break;
                    }
                    actenemy = rand() % 1;
                    if (actenemy == 1)
                    {
                        dnt = 1 + rand() % 5;
                        vida = vida - dnt;
                        std::cout << "Geodude te ha quitado " << dnt << " de vida\n";
                        system("pause");
                    }
                    else
                    {
                        det = 1 + rand() % 5;
                        vida = vida - det;
                        std::cout << "Geodude te ha quitado " << det << " de vida\n";
                        system("pause");
                    }
                } while (act || vidaenemy == 0);
            }
            system("pause");
            break;
        default:
            std::cout << "Elije bien la opcion paro\n";
            system("pause");
            break;
        }
        system("cls");
    } while (des);
    
}


