#include "Equipo.cpp"

using namespace std;

#ifndef Liga_CPP
#define Liga_CPP

class Liga{
	private:
		string nombre;
		string pais;
		vector <Equipo*> equipos;
	public:
		Liga(){
		}
		
		Liga(string nombre, string pais){
			this->nombre=nombre;
			this->pais=pais;
		}
		
		string getNombre(){
			return nombre;
		}
		
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		
		string getPais(){
			return pais;
		}
		
		void setPais(string pais){
			this->pais=pais;
		}
		
		vector <Equipo*> getEquipo(){
			return equipos;
		}
		
		void setEquipo(Equipo* equipo){
			equipos.push_back(equipo); 
		}
		
		void remEquipo(int pos){
			equipos.erase(jugadores.begin() + pos); 
		}
		
		~Liga(){}
};

#endif
