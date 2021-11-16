#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "functions.h"

int main()
{
   ePais elPais;
   elPais.id = 10000;
   elPais.infectados = 60000;
   elPais.muertos = 2000;
   strcpy(elPais.nombre, "Peru");
   elPais.recuperados = 30000;
   char palabra[] = {"algoritmo"};
   char cadena[] = {"UTN-FRA"};

   printf("La cantidad de recuperados es: %d\n", elPais.recuperados);

   int recuDiarios =2000;
   actualizarRecuperados(&elPais,recuDiarios);

   printf("La nueva cantidad de recuperados es: %d\n", elPais.recuperados);

    printf("%s\n", palabra);
    ordenarCaracteres(palabra);
    printf("%s\n", palabra);

    printf("%s\n", cadena);
    invertirCadena(cadena);
    printf("%s\n", cadena);
    return 0;
}
