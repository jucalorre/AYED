#include<stdio.h> 
#include<conio.h> 
#include<cstdlib> 
#include<iostream> 
using namespace std;
int main() 
{ 
	int arreglo[7]={3, 34, 1, 53, 15, 6, 9};
    int i, dif, aux;
    float fact;

    fact= (float)3/4;
    dif= 6 * fact;
	for(int i=0; i<7;i++)
	{
		cout<<arreglo[i]<<endl;;
	}
    while(dif > 0)
    {
        i= 0;
        while(i <= 6-dif)
        {
            if(arreglo[i] > arreglo[i+dif])
            {
                aux=arreglo[i];
                arreglo[i]=arreglo[i+dif];
                arreglo[i+dif]=aux;
            }

            i++;
        }
        dif=dif * fact;
    }
    
    cout<<endl<<endl<<endl<<endl;
    for(int i=0; i<7;i++)
	{
		cout<<arreglo[i]<<endl;
	}
    
} 
