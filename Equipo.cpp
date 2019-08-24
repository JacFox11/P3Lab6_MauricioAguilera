#include "Jugador.cpp"
#include "Partido.cpp"

#ifndef Equipo_CPP
#define Equipo_CPP

class Equipo{
	private:
		string nombre;
		string fundacion;
		vector <Jugador*> jugadores;
		Partido* partido;
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
		
		Partido* getPartido(){
			return partido;
		}
		
		void setPartido( Partido* partido){
			this->partido=partido;
		}
		
		vector <Jugador*> getJugadores(){
			return jugadores;
		}
		
		void setJugadores(vector <Jugador*> jugadores){
			this->jugadores=jugadores;
		}
		
		void setJugador(Jugador* jugador){
			jugadores.push_back(jugador); 
		}
		
		void remJugador(int pos){
			jugadores.erase(jugadores.begin() + pos); 
		}
		
		void print(){
			cout<<"Equipo"<<setw(10)<<"PJ"<<setw(5)<<"PG"<<setw(5)<<"PE"<<setw(5)<<"PP"<<setw(5)<<"GF"<<setw(5)<<"GC"<<setw(5)<<"DG"<<setw(5)<<"PT"<<endl;
			cout<<nombre;
			partido->print();
		}
		
		~Equipo(){}
};

#endif
