#include<iostream>
#include<conio.h>

using namespace std;

class Persona{
			// atributos
	protected : string nombres, apellidos, direccion, fn;
				int telefono;
				
			// metodos
	protected : 
			//constructor (manda parametros a la clase)
				Persona(string name, string lastname, string adress, string birth, int tel){
					nombres = name;
					apellidos = lastname;
					direccion = adress;
					fn = birth;
					telefono = tel;	
				}
	void mostrar();
	void agregar();
	void modificar();
	void eliminar();
};

