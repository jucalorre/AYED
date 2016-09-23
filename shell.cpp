#include<stdio.h> 
#include<conio.h> 
#include<cstdlib> 
#include<iostream> 
using namespace std;
int a[8]; 
int n=8; 
int main() 
{ 
	int i=0,j=0,k=0,aux; 
	int inter=(n/2);
	system("cls");
	for (i=0; i<n; i++) 
	{ 
		printf("INSERTA UN VALOR DEL INDICE %d: \t", i); 
		scanf("%d",a); 
	} 
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
	for(i=0;i<n;i++) 
	{ 
		cout<<a[i]<<endl;
	} 
	getch();
	return 0;
} 
