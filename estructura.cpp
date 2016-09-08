#include<iostream>
#include<string>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
using std::string;

struct alumno{
    string codigo;
    string nombre;
    string carrera;
    int eliminado;
}; alumno lista[30];

FILE *doc;

void nuevo(int p);
void imprimir(int p);
int buscar(string c, int p);
void modificaciones(int p);
void eliminar(int p);
void limpiar();
void acomodar(int p);
void guardar(int p);

int main()
{
	int p=0,op,s;
    string cod;
    do
    {
    cout<<"Base de datos alumnos\n\n"<<endl;
    cout<<" 1) Agregar un alumno\n 2) Consulta\n 3) Modificar\n 4) Eliminar\n 5) Ver todos los usuarios\n 6) Tomar ejemplo \n7) Salir\n\nElije una opción [ ]\b\b";
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
			cout<<"Introduce el código del alumno a eliminar: ";
			cin>>cod;
			eliminar(buscar(cod, p));
			acomodar(p);
			p--;
			break;
            //Eliminar y que ordene
        case 5:
			for(int x=0; x<p; x++)	imprimir(x);
			break;
		case 6:
			cout<<"Introduce el codigo para separar el nombre: " ;
			cin>>cod;
			s= buscar(cod, p);
			guardar(s);
			
			break;
        default:
            cout<<"Opción incorrecta....";
    }
    }while(op!=7);
    return 0;
}
void nuevo(int p){
    cout<<"\n\n\n\nIntroducce el código: ";
    cin>>lista[p].codigo;
    cout<<"Introducce el nombre: ";
    cin>>lista[p].nombre;
    cout<<"Introducce la carrera: ";
    cin>>lista[p].carrera;
    cout<<"\n\n"<<lista[p].nombre<<" ha sido registrado con exito! \nPresione enter para continuar...";
    limpiar();
    return;
}
void imprimir(int p)
{
	if(p!=-1)
	{
     cout<<"Código: "<<lista[p].codigo<<endl;
     cout<<"Nombre: "<<lista[p].nombre<<endl;
     cout<<"Carrera: "<<lista[p].carrera<<endl;
     cout<<"Numero de usuario: "<<p<<endl;
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
	lista[p].nombre = "NULL";
	lista[p].carrera = "NULL";
	lista[p].codigo = "NULL";
	cout<<"Usuario eliminado"<<endl;;
	
}

void acomodar(int p)
{
	for(int x=0; x<=p; x++)
	{
		if(lista[x].nombre.compare("NULL")==0)
		{
			for(int it=x+1; it<=p; it++)
			{
				lista[it-1].nombre=lista[it].nombre;
				lista[it-1].codigo=lista[it].codigo;
				lista[it-1].carrera=lista[it].carrera;
			}
		}
	}
}

void limpiar()
{
	cin.ignore();
	cin.get();
	system("clear");
}

int leer()
{
	
	return 0;
}

void guardar(int p)
{
	if(p>=0)
	{
	string out[3];
	out[0]=lista[p].nombre;
	out[1]=lista[p].carrera;
	out[2]=lista[p].codigo;
	char *nombre = strdup(out[0].c_str());
	char *carrera = strdup(out[1].c_str());
	char *codigo = strdup(out[2].c_str());
	doc=fopen("datos.txt", "a+");
	fprintf(doc, "%s, %s, %s \n", nombre, carrera, codigo);
	fclose(doc);
	cout<<"Los datos han sido guardador correctamente"<<endl;
	}
}
