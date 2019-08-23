#include "Jugador.cpp"

#ifndef Equipo_CPP
#define Equipo_CPP

class Equipo{
	private:
		string nombre;
		string fundacion;
		vector <Jugador*> jugadores;
	public:
		Equipo(){
		}
		
		Equipo(string nombre, string fundacion){
			this->nombre=nombre;
			this->fundacion=fundacion;
		}
		
		string getNombre(){
			return nombre;
		}
		
		void setNombre(string nombre){
			this->nombre=nombre;
		}
		
		string getFundacion(){
			return fundacion;
		}
		
		void setFundacion(string fundacion){
			this->fundacion=fundacion;
		}
		
		vector <Jugador*> getJugadores(){
			return jugadores;
		}
		
		void setJugador(Jugador* jugador){
			jugadores.push_back(jugador); 
		}
		
		void remJugador(int pos){
			jugadores.erase(jugadores.begin() + pos); 
		}
		
		~Equipo(){}
};

#endif
