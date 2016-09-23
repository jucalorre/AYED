#include<stdio.h> 
#include<conio.h> 
#include<cstdlib>
#include<iostream>
using namespace std;
int x[4]={1,4,8,6}; 
int n=4,j=0,i=0; 
int temp=0,minimo=0; 
int main(){ 
	system("CLS");
	for(i=0;i<n-1;i++) 
	{ 
		minimo=i; 
			for(j=i+1;j<n;j++) 
			{ 
				if(x[minimo] > x[j]) 
				{ 
				  minimo=j; 
				} 
			} 
		temp=x[minimo]; 
		x[minimo]=x[i]; 
		x[i]=temp; 
	} 
	for(i=0;i<n;i++) 
	{ 
		cout<<x[i];
	} 
	getch(); 
	return 0;
}
