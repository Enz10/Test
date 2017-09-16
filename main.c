#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int persona[20];
    int i;
    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                for(i=0;i<20;i++)
                {
                    printf("Ingrese nombre: \n");
                    gets(Epersona[i].nombre);

                    printf("Ingrese edad: \n");
                    scanf("%d",&Epersona[i].edad);

                    printf("Ingrese DNI: \n");
                    scanf("%d",&Epersona[i].dni);
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
        system("cls");
    }

    return 0;
}
