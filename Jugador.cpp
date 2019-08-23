#include <string.h>
#include <vector>
#include <bits/stdc++.h>
#include<iostream> 
#include<string> 
#include <fstream>
#include <stdlib.h>

using namespace std;

#ifndef Jugador_CPP
#define Jugador_CPP

class Jugador{
	private:
		string nombre;
		int dorsal;
		string pais;
	public:
		Jugador(){
		}
		
		Jugador(string nombre, int dorsal, string pais){
			this->nombre=nombre;
			this->dorsal=dorsal;
			this->pais=pais;
		}
		
		string getNombre(){
			return nombre;
		}
		
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		
		int getDorsal(){
			return dorsal;
		}
		
		void setDorsal(int dorsal){
			this->dorsal=dorsal;
		}
		
		string getPais(){
			return pais;
		}
		
		void setPais(string pais){
			this->pais=pais;
		}
		
		void print(){
			cout<<nombre<<", "<<dorsal<<endl;
		}
		
		~Jugador(){}
};

#endif
