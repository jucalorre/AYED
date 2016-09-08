#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIMITE 50
// Ejemplo aprenderaprogramar.com
int main() 
{
    int i=0;
    char cadena1 [LIMITE]; char cadena2 [LIMITE];
    char cadena3 [LIMITE];
    FILE* leer;
    leer = fopen("datos.txt", "rt");
    do
    {
		fscanf (leer, "%c", &cadena1[i]); i++;
    }
    while (cadena1[i-1]>=32 && cadena1[i-1]<=126);
    
    cadena1[i]='\0';
    i=0;
    do
    {
		fscanf (leer, "%c", &cadena2[i]); i++;
    }
    while (cadena2[i-1]>=32 && cadena2[i-1]<=126);
    
    cadena2[i]='\0';
    i=0;
    do
    { fscanf (leer, "%c", &cadena3[i]); i++;
    }
    while (cadena3[i-1]>=32 && cadena3[i-1]<=126);
    
    cadena3[i]='\0';
    fclose(leer);
    puts ("Extraido de fichero lo siguiente: \n");
    puts (cadena1); puts (cadena2); puts (cadena3);
    puts("Proceso completado");
    return 0;
}
