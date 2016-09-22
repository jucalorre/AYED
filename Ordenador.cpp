//Ejemplo descargado de internet modificado para la clase
#include<iostream>
#include<time.h>
using namespace std;


void insercionDirecta(int A[],int n);
void muestraCadena(int cant,int n[]);
int numeroAleatorio(int p);

int colum;
char  sel;
int main () 
{
 	srand(time(NULL));
 	system("color F0");
    int cantidad, n;
    char  exit;
    cout<<"***************************************************\n";
	cout<<"Ingresa la cantidad de numeros aleatorios para crear: ";
    cin>>cantidad;
    cout<<"Ingresa el rango de numeros a crear: ";
    cin>>n;
	cout<<"Ingrese la cantidad de columnas en las que desa acomodar los datos: ";
	cin>>colum;
	do
	{
  		   cout<<"a) De mayor a menor\nb) De menor a mayor\nIngrese una opcion[]\b\b: ";
  		   cin>>sel;
	  		   switch(toupper(sel))
	  		   {
			   		case 'A':
						 sel='a';
						 break;
 					case 'B':
						 sel='b';
						 break;
 					default:
						 cout<<"Error, ingresa solo caracteres validos\n";
						 exit='x';
						 break;
			   }
 	}while(sel=='x');

    int A[cantidad];
 	for(int x=0; x<=cantidad; x++)
 	{
	 		A[x]= numeroAleatorio(n);
	}
	cout<<"La cadena Original/Desacomodada es: \n\n\n";
	muestraCadena(cantidad, A);
	
    insercionDirecta(A,cantidad);
    cout<<"La cadena acomodada es: \n\n\n";
    muestraCadena(cantidad,A);
   	system("PAUSE");
   	return 0;
}
 
void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<"\t";
        if((i%colum)==0 && colum<=10 && i==1)
	    {
		 	cout<<endl;
		}
    }
    cout<<"\n\n\n\n";
}

void insercionDirecta(int A[],int n)
{
      int i,j,v;
      for (i = 1; i < n; i++) //mientras el iterador sea menor al parametro n (La cantidad de numeros que generamos)
        {
             v = A[i];
			 /*Entero v toma el valor de la matriz A en el índice i (Iterador)
			  es decir, toma el valor de un número arriba porque comienza desde 1
			  Esta variable la vamos a usar como un buffer para almacenar la variable*/
             j = i - 1;
			 /*Al entero j lo igualamos a i-1 para usarlo después
			 es decir, si el iterador i es igual a 1, j tendrá valor de 0
			 por lo tanto lo usaremos para referirse a dos índices de la matriz*/
			 
			 if(sel=='b')
			 {
	             while (j >= 0 && A[j] > v) //Mientras j sea mayor o igual a 0 y la matriz A en el índice j sea mayor al entero v
				 {
	                  A[j + 1] = A[j];
	                  j--;
	             }
			 }
			 else
			 {
			  	 while (j >= 0 && A[j] < v) //Mientras j sea mayor o igual a 0 y la matriz A en el índice j sea mayor al entero v
				 {
	                  A[j + 1] = A[j];
	                  j--;
	             }
			 }
             A[j + 1] = v;
      }   
}

int numeroAleatorio(int p)
{
 	return 1+rand()%p;	
}

