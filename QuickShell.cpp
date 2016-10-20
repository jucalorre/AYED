#include<iostream>
#include<time.h>
using namespace std;


void insercionDirecta(int A[],int n);
void muestraCadena(int cant,int n[]);
int numeroAleatorio(int p);
void shell(int n, int a[]);
void qs(int lista[],int limite_izq,int limite_der);
void quicksort(int lista[],int n);
void quick(int lista[], int cant);

int colum;
char  sel;
int main () 
{
 	srand(time(NULL));
 	system("color F0");
    int cantidad, n=100;
    cout<<"Ingrese la cantidad de datos a crear: ";
    cin>>cantidad;
    int A[cantidad];
 	for(int x=0; x<=cantidad; x++)
 	{
	 		A[x]= numeroAleatorio(n);
	}
	
	cout<<"Ordenamiento por shell sort: "<<endl;
	muestraCadena(cantidad, A);
	shell(cantidad, A);
	muestraCadena(cantidad, A);
	
	cout<<"\n\n\nOrdenamiento por medio de quicksort"<<endl;
	for(int x=0; x<=cantidad; x++)
 	{
	 		A[x]= numeroAleatorio(n);
	}
	muestraCadena(cantidad, A);
	quicksort(A, cantidad);
	muestraCadena(cantidad, A);
	cout<<endl;
   	system("PAUSE");
   	return 0;
}
 
void muestraCadena(int cant,int n[])
{
    int i;
    for(i=0;i<cant;i++)
    {
        cout<<n[i]<<"\t";
    }
    cout<<"\n\n\n\n";
}


int numeroAleatorio(int p)
{
 	return 1+rand()%p;	
}

void shell(int n, int a[]) 
{ 
    int i=0,j=0,k=0,aux; 
	int inter=(n/2);
	while(inter>0)
	{ 
		for(i=inter;i<n;i++)
		{ 
			j=i-inter; 
			while(j>=0) 
			{ 
				k=j+inter; 
				if(a[j]<=a[k])
				{ 
					j--; 
				} 
				else
				{ 
					aux=a[j]; 
					a[j]=a[k]; 
					a[k]=aux; 
					j=j-inter; 
				} 
			}		 
		} 
	inter=inter/2; 
	}
} 




void quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}

void qs(int lista[],int limite_izq,int limite_der)
{
  int izq,der,temporal,pivote;
  izq=limite_izq;
  der = limite_der;
  pivote = lista[(izq+der)/2];

  do{
      while(lista[izq]<pivote && izq<limite_der)izq++;
      while(pivote<lista[der] && der > limite_izq)der--;
      if(izq <=der)
      {
          temporal= lista[izq];
          lista[izq]=lista[der];
          lista[der]=temporal;
          izq++;
          der--;
      }
  }while(izq<=der);
  if(limite_izq<der){
  					 qs(lista,limite_izq,der);
					   }
  if(limite_der>izq){
  					 qs(lista,izq,limite_der);
					   }
}
