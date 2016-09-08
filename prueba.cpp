#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
using std::string;

FILE *doc;


int main()
{
	doc=fopen("datos.txt", "w");
	fprintf(doc, "Hola perros");
	cin.get();
	return 0;
}
