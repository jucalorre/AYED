#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std; 

int main() 
{
	FILE* fichero= fopen("datos.txt", "r");
    char control= 33, temp[50];
    int i=1, cont=0;
	while (!feof(fichero))
 	{
			fgets(temp, 50, fichero);
			cont++;
 	}
 	
    /*while ((control >=32 && control<=126))  
    {
        control = fgetc(fichero);
     
        if (control >=32 && control<=126)        cadena[i-1] = control;
        i++;
    }*/
    return 0;
}
