#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <locale.h>

using namespace std;

struct game
{


	int id, numarticulo, año;
	string videojuego, descripcion, clasificacion, caracteristicas, genero, consola;
	float subtotal, iva, total;
};


int main()
{

    game compras[3];
	int opcion, busqueda;
	
		do

		{
			setlocale(LC_CTYPE, "SPANISH");

			printf("\t ***GAMESTORE*** \n");
			cout << " 1.-Agregar videojuego \n 2.-Modificar videojuego\n 3.-Eliminar videojuego\n 4.-Lista videojuego\n 5.-Limpiar Pantalla\n 6.-Salir\n";			
			scanf_s("%d", &opcion);

			switch (opcion)
			{
			case 1:
				
				for (int i = 0; i < 3; i++)
				{
					compras[i].id = 20220000 + i;
					printf("ID: %d \n", compras[i].id);
					int salida = 1;

					do
					{
						printf("ingrese el numero articulo \n");
						scanf_s("%d", &compras[i].numarticulo);
						if (compras[i].numarticulo == compras[i - 1].numarticulo || compras[i].numarticulo == compras[i - 2].numarticulo)
						{
							printf("el numero articulo ya existe \n");

						}
						else
						{
							salida = 2;
						}
					} while (salida == 1);



					
					printf("ingrese el nombre del videojuego\n");
					cin.ignore(); 
					getline(cin, compras[i].videojuego);					
					printf("Ingrese el año de lanzamiento \n");
					scanf_s("%d", &compras[i].año);
					printf("ingrese la descripcion del videojuego\n");
					cin.ignore();
					getline(cin, compras[i].descripcion);
					printf("ingrese la clasificacion del videojuego\n");
					cin.ignore();
					getline(cin, compras[i].clasificacion);
					printf("ingrese las caracteristicas del videojuego\n");
					cin.ignore();
					getline(cin, compras[i].caracteristicas);
					printf("ingrese el genero del videojuego\n");
					cin.ignore();
					getline(cin, compras[i].genero);
					printf("ingrese la consola del videojuego\n");
					cin.ignore();
					getline(cin, compras[i].consola);
					printf("ingrese el subtotal \n");
					scanf_s("%f", &compras[i].subtotal);
					compras[i].iva = compras[i].subtotal * .16;
					compras[i].total = compras[i].subtotal + compras[i].iva;

				}
				break;

			case 2:
			break;

			case 3:
				printf("ingrese el numero articulo");
				scanf_s("%d", &busqueda);


				for (int i = 0; i < 3; i++)
				{
					if (busqueda == compras[i].numarticulo)
					{
						compras[i].numarticulo = 0;
					}
				}
				break;

			case 4:
				int opc2;
				printf("1.- numero articulo \n 2.-Listas Vigentes");
				scanf_s("%d", &opc2);
				if (opc2 == 1)
				{
					printf("ingrese el numero articulo");
					scanf_s("%d", &busqueda);


					for (int i = 0; i < 3; i++)
					{
						if (busqueda == compras[i].numarticulo)
						{
							printf("ID: %d \n", compras[i].id);
							printf("numero articulo: %d \n", compras[i].numarticulo);
							printf("videojuego: %s", compras[i].videojuego.c_str());
							printf("año: %d", compras[i].año);
						    printf("descripcion: %s", compras[i].descripcion.c_str());
							printf("clasificacion: %s", compras[i].clasificacion.c_str());
							printf("caracteristicas: %s", compras[i].caracteristicas.c_str());
							printf("genero: %s", compras[i].genero.c_str());
							printf("consola: %s", compras[i].consola.c_str());
							printf("subtotal: %f \n", compras[i].subtotal);
							printf("iva: %f \n", compras[i].iva);
							printf("total: %f \n", compras[i].total);
						}
					}
				}
				else
				{
					for (int i = 0; i < 3; i++)
					{
						if (compras[i].numarticulo != 0)
						{
							printf("ID: %d \n", compras[i].id);
							printf("numero articulo: %d \n", compras[i].numarticulo);
							printf("videojuego: %s", compras[i].videojuego.c_str());
							printf("año: %d", compras[i].año);
							printf("descripcion: %s", compras[i].descripcion.c_str());
							printf("clasificacion: %s", compras[i].clasificacion.c_str());
							printf("caracteristicas: %s", compras[i].caracteristicas.c_str());
							printf("genero: %s", compras[i].genero.c_str());
							printf("consola: %s", compras[i].consola.c_str());
							printf("subtotal: %f \n", compras[i].subtotal);
							printf("iva: %f \n", compras[i].iva);
							printf("total: %f \n", compras[i].total);
						}
					}
				}
				break;
			case 5:
				system("cls");
				break;
			case 6:
				printf("saliendo... \n");
				break;
			default:
				printf("intente denuevo... \n");
				break;
			}
		} while (opcion != 5);
		system("pause");
}