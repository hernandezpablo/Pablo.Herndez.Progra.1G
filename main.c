#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "vacunas.h"
#define TAM 5
//int posicionPar(char cadena[]);
int main()
{
    char palabra[20];
    char letra1;
    char letra2= 'b';
    int precio = 1000;
    eVacuna vacunas[TAM] =
    {
    {100, "Astrazeneca", "a", 100 },
    {101, "Xinofarm", "a", 87.5},
    {102, "Rusa", "b", 95.0 },
    {103, "Americana", "c", 88.3},
    {104, "Oxford", "a", 80.1}
    };

    printf("%d\n", precio);
    precio = aplicarAumento(precio);
    printf("%d\n", precio);

    printf("Ingrese una palabra: \n");
    gets(palabra);
    //strlwr(palabra);
    printf("Ingrese una letra que vas a remplazar: \n");
    scanf("%c", &letra1);

    printf("La letra se remplazo %d cantidad de veces\n", remplazarCaracteres(palabra, letra1, letra2));
    printf("%s\n", &palabra);

    printf("Desordenados\n");
    printf("------------------------------------------------------------------------\n");
    for(int i=0; i<TAM; i++){
        printf("%d  %-10s       %-10s       %.2f\n\n", vacunas[i].id, vacunas[i].nombre, vacunas[i].tipo, vacunas[i].efectividad);
    }

    printf("Ordenados\n");
    printf("--------------------------------------------------------------\n");
    ordenarVacuna(vacunas, TAM);
      for(int i=0; i<TAM; i++){
        printf("%d  %-10s       %-10s       %.2f\n\n", vacunas[i].id, vacunas[i].nombre, vacunas[i].tipo, vacunas[i].efectividad);
    }
    return 0;
}


/*int posicionPar(char cadena[])
{
    int contador = 0;
    for (int i = 0; i < strlen(cadena); i++)
    {
        if (i % 2 == 0)
        {
           printf("valor posicion par: %c\n", cadena[i]);
           contador++;
        }

    }
    return contador;
}
*/
