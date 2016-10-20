#include<iostream>
#include<cstdlib>
#define PI  3.14
using namespace std;

void areaCirculo(int radio);
void areaTriangulo(int b, int h);
void areaCuadrado(int lado);
int areaTrapecio();

float area, *areaPtr=&area;

int main()
{
 	 
 	char sel;
 	int a, b, h;
 	do
 	{
	 	cout<<"Menu de areas: \n\n"<<" a) Area de circulo\n b) Area de triangulo\n c) Area de cuadrado\n d) Area de trapecio \n f) Salir\n\n\n Introduce una opcion correcta[ ]\b\b";
	 	cin>>sel;
	 	sel=toupper(sel);
		switch(sel)
	 	{
			case 'A':
				cout<<"Ingrese el radio del circulo: ";
				cin>>a;
				areaCirculo(a);
				cout<<"El area del circulo es: "<<area<<endl;
				sel='F';
			 	break;
			case 'B':
				cout<<"Ingrese la base del triangulo: \t\t";
				cin>>b;
				cout<<"Ingrese la altura del triangulo:\t";
				cin>>h;
				areaTriangulo(b, h);
				cout<<"El area del triangulo es: "<<area<<endl;
				sel='F';	 
		 		 break;
		    case 'C':
				cout<<"Ingrese el lado del cuadrado: \t";
				cin>>b;
				areaCuadrado(b);
				cout<<"El area del cuadrado es: "<<area<<endl;
				break;
			case 'D':
				 //Area de un Trapecio
				 
		 		 break;
		    case 'F':
				 cout<<"Gracias por usar el programa"<<endl;				 
		 		 break;
		 	default:
				 cout<<"Seleccione solamente una opcion correcta";
	 	 	 	 break;	 
		}
	}while(sel!='F');
 	cin.ignore();
 	cin.get();
 	return 0;
}

void areaCirculo(int radio)
{
 	*areaPtr = PI*(radio*radio);
}

void areaTriangulo(int b, int h)
{
 	 *areaPtr = (float)(b * h)/2;
}

void areaCuadrado(int lado)
{
 	 *areaPtr= lado*lado;
}
 
