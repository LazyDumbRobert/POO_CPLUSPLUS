#include "Cliente.cpp"
#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	
	string n, nombre, apelli, direc, fechan;
	int telef;
	
	cout<<"Ingrese el nombre: ";
	cin>>nombre;
	cout<<"\nIngrese el apellido: ";
	cin>>apelli;
	cout<<"\nIngrese la direccion: ";
	cin>>direc;
	cout<<"\nIngrese la fecha de nacimeinto: ";
	fflush(stdin);
	cin>>fechan;
	cout<<"\nIngrese el numero de telefono: ";
	cin>>telef;
	cout<<"\nIngrese el numero de nit: ";
	cin>>n;
	
	//Instancia de un objeto
	
	Cliente obj = Cliente(nombre,apelli,direc,fechan,telef,n);
	cout<<"\n";
	obj.mostrar();
	
	/*
	Cliente obj = Cliente();
	obj.setNombres(nombre);
	obj.setApellido(apelli);
	obj.setDireccion(direc);
	obj.setCumpleanos(fechan);
	obj.setel(telef);
	obj.setNit(n);
	*/
	
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar el numero de nit: ";
	cin>>n;
	obj.setNit(n);
	cout<<"Nit: "<<obj.getNit();
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar el nombre: ";
	cin>>nombre;
	obj.setNombres(nombre);
	cout<<"Nombre: "<<obj.getNombres();
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar apellidos: ";
	cin>>apelli;
	obj.setApellido(apelli);
	cout<<"Apellidos: "<<obj.getApellido();
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar direccion: ";
	cin>>direc;
	obj.setDireccion(direc);
	cout<<"Direccion: "<<obj.getDireccion();
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar Fecha de nacimiento: ";
	cin>>fechan;
	obj.setCumpleanos(fechan);
	cout<<"Fecha de nacimiento: "<<obj.getCumpleanos();
	
	cout<<"\n---------------------------------";
	cout<<"\nModificar telefono: ";
	cin>>telef;
	obj.setel(telef);
	cout<<"Telefono: "<<obj.getTel();
	
	return 0;
}


