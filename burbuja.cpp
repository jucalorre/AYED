#include<stdio.h> 
#include<cstdlib>
int a[7]={3,2,1, 9,7 ,2, 3}; 
int i,j,aux,n=7; 
int main()
{ 
	system("cls") ;
	for(i=0;i<=n;i++)
	{ 
		for(j=0;j<n-1;j++)
		{ 
			if(a[j]>a[j+1])
			{ 
				aux=a[j]; 
				a[j]=a[j+1]; 
				a[j+1]=aux; 
			} 
		} 
	} 
		for(i=0;i<7;i++) 
		{ 
			printf("%d\n",a[i]); 
		} 
	system("PAUSE");
	return 0;
} 
