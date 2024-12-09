// Proyecto_Narracion.cpp : 
//EstebanChávez Álvarez

#include <stdio.h>
#include <iostream>
#include <string>
#include <locale>
#include <locale.h>
#include <locale>
#include <Windows.h>
#include <time.h> 
#include <thread>
#include <chrono>

void imprimirlento(const std::string& texto, int milisegundos) //funcion para que se pueda imprimir lento
{
	for (char c : texto) {
		std::cout << c << std::flush;  // Imprimir el carácter
		std::this_thread::sleep_for(std::chrono::milliseconds(milisegundos));  // Pausar
	}
	std::cout << std::endl;  // Salto de línea al finalizar la impresión
}

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");
	int dado = 0;
	int desicion1 = 0;
	int desicion2 = 0;
	int dplanetas = 0;
	int desicion3 = 0;
	int planetaagua;
	bool con = 1;	
	std::string nombre;
	do
	{
		imprimirlento("  Welcome to the Mashine\n  Por favor ecriba su nombre\n", 65);
		std::getline(std::cin, nombre);
		imprimirlento("  Maravilloso. ", 65);
		for (char c : nombre)
		{
			std::cout << c << std::flush;  // Imprimir el carácter de un string y que se imprima inmediatamente
			std::this_thread::sleep_for(std::chrono::milliseconds(150));  // Esperar en ms
		}
		imprimirlento("  Te doy la bienvenida a la base de espacial GalaxyCross\n", 65);
		imprimirlento( "  La maquina de transporte mas grandre y rapida de la Via Lactea\n", 65);
		imprimirlento("  Mi nombre Jose Peña, Peña, Jose, Mike, Jomike, Miguelito y soy el Teniente\n", 65);
		imprimirlento("  Estamos en una exploracion para estudiar de cerca el agujero negro supermasivo\n", 65);
		imprimirlento("  Sagitario A*\n", 65);
		imprimirlento("  Es de mi agrado comunicarle que debido a un infarto espacial el capitan ha muerto y ahora tu eres nuestro nuevo lider\n", 65);
		imprimirlento("  Asi que le actualizo\n  Encontramos una estrella a docientos años luz con ningun planeta orbitando\n  Por otro lado tenemos un pequeño sistema a cruzando dos estrellas màs\n", 65);
		imprimirlento("  Por lo que tenemos dos opciones\n  1) Revisar a ver si uno de los planetas tiene recursos para la nave\n  2) intentar deborar la estrella para conseguir energia\n", 65);
		imprimirlento("  Que desea hacer capitan?\n", 65);
		std::cin >> desicion1;
		switch (desicion1)
		{
		case 1:
			system("cls");
			imprimirlento("  Muy bien capitan activemos salto de vortice interestelar!!!\n", 65);
			imprimirlento("  pssshhh vvvuuuuuuuu fiuuumm\n", 65);
			imprimirlento("  ...\n", 65);
			imprimirlento("  Capitanazo!! Hemos llegado a un sistema ", 65);
			imprimirlento("  Hemos encontrado 2 planetas con que puden tener buenos recursos:\n  1) E404 - El cual se detecta una gran atmosfera con un nucleo que puede servir para el salto de vortice\n", 65);
			imprimirlento("  2)  Ftal ERR - Atmosfera rica en O2 y La superficie parece que es liquida\n  Adonde vamos?\n", 65);
			std::cin >> dplanetas; 
			switch (dplanetas)
			{
			case 1:
				system("cls");
				imprimirlento("  Estamos entrando en la Atmosfera de E404\n  Hay tormentas electricas y mucho viento capitan\n", 65);
				imprimirlento("  'Se logra apreciar un punto negro en el centro del planeta'\n pip pip pip pip advertencia advertencia...'", 65);
				imprimirlento("  Capitan estamos en un planeta que tiene un agujero negro los ultrapropulsores no estan sirviendo\  nos esta tragando el planeta!!!\n", 65);
				imprimirlento("  'La nave es absorbida por el agujero negro...'\n  saludosterricola. somos una civilizacion que habitaba en el planeta que ustedes conocian por E404\n", 65);
				imprimirlento(" Hemos hechop que el nucleo del planeta tenga tanta energia que se volvio un agujero negro\n  Al adentrarnos en el hemos resuelto nuestra extincion\n", 65);
				imprimirlento("  y ahora estamos en todos los lugares del universo.\n  Al ser el unico sobreviviente de la nave hemos decidido convertirte en unos de nosotros\n", 65);
				imprimirlento("  'De repente ves como tu cuerpo se desvanece y te conviertes en un ser astral Unico con el universo'\n", 65);
				std::cin >> con;
				break;
			case 2:
				system("cls");
				imprimirlento("  Estamos entrando al planeta capitan\n  Tiene abundante agua en su superficie\n  Vamos a entar a las profundidades a ver que misterios escopnde\n", 65);
				imprimirlento("  'La nave se sumerge bajo el agua...'\n  'de repente suena un ruido...'\n ", 65);
				imprimirlento("  'Se logra apreciar una cupula mas al fondo'\n  te tratas de acercar pero no se ve ni mas cerca ni mas lejos\n", 65);
				imprimirlento("  Capitan!!\n  seguimos avanzando pero solo se lo azul de este vasto oceano\n  Que desea hacer capitan?\n  1) Salir del planeta\n  2) Seguir investigando", 65);
				std::cin >> planetaagua;
				switch (planetaagua)
				{
				case 1:
					imprimirlento("  Ya estamos saliendo del planeta capitan tiempo estimado 1s\n", 65);
					imprimirlento("  'MMMMMMMMtruuuum'\n", 65);
					break;
				case 2:
					imprimirlento("  Vamos a continuar con el camino entonces\n", 65);
					break;
				default:
					imprimirlento("  ... escribe una opcion valida", 65);
					break;
				}
				imprimirlento("  Capitan!!! seguimos viendo azul :(\n", 65);
				imprimirlento("  'De la nada empiezas a ver que los ojos de tu tripulacion se tornan azules...'\n ", 65);
				imprimirlento("  'Tu vision se torna azul...'\n  'Ahora y por el resto de tus dias, veras azul...'\n", 65);
				imprimirlento("  Fin\n  Desea seguir viendo los caminos por explorar?", 65);
				std::cin >> con;
			default:
				imprimirlento("  Esa respuesta no es valida\n", 65);
				con = 1;
				break;
			}
			break;
		case 2:
			imprimirlento("  'Psssssssss PUUUM'\n", 65);
			imprimirlento("  Capitan hemos entrado en la orbita de la estrella\n", 65);
			imprimirlento("  'La nave abre un compartimento de absorcion estelar'\n", 65);
			imprimirlento("  Comenzando a absorver la estrella\n", 65);
			imprimirlento("  ...\n", 65);
			imprimirlento("  Capitan tenemos la enegia necesaria para llegar al centro de la galaxia\n", 65);
			imprimirlento("  Activando velocidad supermegahiperinterestelar \n", 65);
			imprimirlento("  Ffffffffffiiiiiiiiiiiiiuuuuummmmmmm\n", 65);
			imprimirlento("  ...\n", 65);
			imprimirlento("  'Has ido a una velocidad incalculable has pasado la barrera del espacio tiempo\n con eso, sales completamente del universo conocido y te ves a ti mismo\n", 65);
			imprimirlento("  ...\n", 65);
			imprimirlento("  Te has pasado el juego\n", 65);
			break;

		default:
			imprimirlento("  Esa opcion no es valida por favor elija bien\n", 65);
			con = 1;
			break;
		}

	} while (con);
}

