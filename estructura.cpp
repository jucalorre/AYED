#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
using std::string;

struct alumno{
    string codigo;
    string nombre;
    string carrera;
}; alumno lista[30];

void nuevo(int p);
void imprimir(int p);
int buscar(string c, int p);
void modificaciones(int p);
void eliminar(int p);

int main()
{
    int p=0,op,s;
    string cod;
    do
    {
	system("clear");
    cout<<"Base de datos alumnos\n\n"<<endl;
    cout<<" 1) Agregar un alumno\n 2) Consulta\n 3) Modificar\n 4)Eliminar\n 5) Salir\n\nElije una opción [ ]\b\b";
    cin>>op;
    switch (op){
        case 1: 
            nuevo(p);
            p++;
            break;
        case 2: 
            cout<<"Introducce el código del alumno a buscar: ";
            cin>>cod;
            imprimir(buscar(cod,p));
            break;
        case 3:
            cout<<"Introducce el código del alumno a actualizar: ";
            cin>>cod;
            s=buscar(cod,p);
            imprimir(s);
            modificaciones(s);
            imprimir(s);
            break;
        case 4:
			cout<<"Introduce el código del alumno a elimiar: ";
			cin>>cod;
			
            //Eliminar y que ordene
        default:
            cout<<"Opción incorrecta....";
    }
    }while(op!=5);
    return 0;
}
void nuevo(int p){
    cout<<"Introducce el código: ";
    cin>>lista[p].codigo;
    cout<<"Introducce el nombre: ";
    cin>>lista[p].nombre;
    cout<<"Introducce la carrera: ";
    cin>>lista[p].carrera;
    return;
}
void imprimir(int p)
{
	if(p!=-1)
	{
     cout<<"Código: "<<lista[p].codigo<<endl;
     cout<<"Nombre: "<<lista[p].nombre<<endl;
     cout<<"Carrera: "<<lista[p].carrera<<endl;
    }
     return;
}

int buscar(string c, int p){
     int band=-1;
     for(int x=0; x<=p;x++)
     {
         if(c.compare(lista[x].codigo)==0)
         {
            band=x;
         }
     }
         if (band==-1)
            cout<<"Código no encontrado....";
    return band;
}

void modificaciones(int p){
    int op;
    cout<<"Selecciona el dato a editar: \n1) Código\n2) Nombre\n3) Carrera\n [ ]\b\b";
    cin>>op;
    switch (op)
    {
        case 1: 
            cout<<"Introduce el código actualizado: ";
            cin>>lista[p].codigo;
            break;
        case 2: 
            cout<<"Introduce el nombre actualizado: ";
            cin>>lista[p].nombre;
            break;
        case 3: 
            cout<<"Introduce la carrera actualizada: ";
            cin>>lista[p].carrera;
            break;
        default: cout<<"\n\nCampo incorrecto..";
    }
}
void eliminar(int p)
{
	
}
