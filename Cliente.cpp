#include "Persona.cpp"
#include<iostream>
#include<conio.h>

using namespace std;

class Cliente : Persona{
				//atributos
		private : string nit;
				//constructor
		public :
		Cliente ();
		 
		Cliente(string name, string lastname, string adress, string birth, int tel, string n) : Persona(name, lastname, adress, birth, tel){
			n = nit;
		}		
	//Metodos set y get
	
	//Set (modificar el atributo)
	void setNit(string n){nit = n;}
	void setNombres(string name){nombres = name;}
	void setApellido(string lastname){apellidos = lastname;}
	void setDireccion(string adress){direccion = adress;}
	void setCumpleanos(string birth){fn = birth;}
	void setel(int tel){telefono = tel;}
	//Get
	string getNit(){return nit;}
	string getNombres(){return nombres;}
	string getApellido(){return apellidos;}
	string getDireccion(){return direccion;}
	string getCumpleanos(){return fn;}
	int getTel(){return telefono;}
	
	void mostrar(){
		cout<<"--------------------"<<endl;
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombre: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha de nacimiento: "<<fn<<endl;
	}	
};
