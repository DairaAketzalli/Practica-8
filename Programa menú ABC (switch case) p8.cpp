#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int o, o2;

main()
{
	do
	{

		printf("\nMENU. \n A.- Altas. \n B.- Bajas. \n C.- Cambios. \n Selecciona opcion: ");
		o=getche();
		o=toupper(o);
	
		switch(o)
		{
			case 'A':
				puts("\nSeleccionaste altas.");
				break;
			case 'B':
				puts("\nSeleccionaste bajas.");
				break;
			case 'C':
				puts("\nSeleccionaste cambios.");
				break;
			default:
				printf("\nNo existe opción.");
				break;
		}
			printf("\n\n¿Quieres volver al menu?\n 1.- Si.\n 2.- No.\n");
		scanf("%d", &o2);	
	}

		while(o2==1);
}
