// C004_bucles.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <cstdlib>

int main()
{
    //Sintaxis While 
    int contador = 0;
    while (contador <= 100)
    {
        contador++;
        std::cout << "El contador va en: " << contador << std::endl;

    }
    std::cout << "Hello World!\n";
    //Sintaxis DO WHILE
    do
    {
        contador--;
        std::cout << "El valor DO WHILE va en: " << contador << std::endl;
    } while (true);
    //Sintaxis FOR
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Esto se ejecutará hasta que pierdas tus " << i << " vidas... \n";
        std::cout << "Presiona una tecla...\n";
        std::cout << "jaja perdiste una vida vuelve a intentarlo u.u \n";
    }
    /*Codigo
        Color
0    Negro
1    Azul
2    Verde
3    Celeste cielo
4    Rojo
5    Morado
6    Amarillo
7    Blanco hueso
8    Gris
9    Celeste
a    Verde claro
b    Celeste claro
c    Rojo fuerte
d    Morado oscuro
e    Color crema
f    Blanco puro

        */
}

