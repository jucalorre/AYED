#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main() 
{
	FILE * arch=fopen("datos.txt", "r");
		if(arch==NULL)		cout<<"No se ha podido abrir el fichero"<<endl;
		else 				cout<<"Archivo abierto correctamente";
	char temp[50];
	int cont =0;
	while (!feof(arch))
 	{
			fgets(temp, 50, arch);
			cont++;
 	}
 	cout<<"Tiene un total de: "<<cont<<" alumnos registrados"<<endl;	
	fclose( arch );
	
	return 0;
}
