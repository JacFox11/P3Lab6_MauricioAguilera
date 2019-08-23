#include "Liga.cpp"


#ifndef ADMLiga_CPP
#define ADMLiga_CPP
using namespace std;
class admLiga{
      private:
              string ruta;
              vector<Liga*> ligas;                           
      public:
             
            admLiga(string ruta){
               this->ruta=ruta;
			 }            
            string getRuta(){
                 return ruta;
			} 
            
            void addLiga(Liga *p){
                 ligas.push_back(p);
		    }
            
             vector<Liga*> getLigas(){
                  return ligas;
             } 

			void remLiga(int p){
                  ligas.erase(
				     ligas.begin()+p);
             }
			 
			 int getN(){
               ligas.size();
			}             
            
            ~admLiga(){}
            
            string token(string cadena, string divisor, 
                                    int pos){
               if(cadena.size()>0){
                 char oracion[cadena.size()]; 
                 for (int i=0;i<=cadena.size();i++)
                 {oracion[i]=cadena[i];}                    
                 char *ptrtoken; 
                 int num=1;
                 const char* d=divisor.c_str();
                 ptrtoken = strtok(oracion , d);             
                 while(ptrtoken){
                     if(num==pos){ 
                        return ptrtoken;}                 
                     ptrtoken = strtok(NULL, d);
                     num++;}
                 return "";
               }else{return "";}
            }
            
        void escribir(){
          	ofstream Escribir;
        	Escribir.open(ruta.c_str());  
        	for(int i=0; i<ligas.size();i++){
        		Escribir<<"$"<<ligas.at(i)->getNombre()<<":"<<ligas.at(i)->getPais()<<endl;
        		for (int j=0; j<ligas.at(i)->getEquipos().size(); j++){
        			Escribir<<ligas.at(i)->getEquipos().at(j)->getNombre()<<":"<<ligas.at(i)->getEquipos().at(j)->getFundacion()<<"{";
        			for (int k=0; k<ligas.at(i)->getEquipos().at(j)->getJugadores().size(); k++){
        				Escribir<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getNombre()<<"|"<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getDorsal()<<"|"<<ligas.at(i)->getEquipos().at(j)->getJugadores().at(k)->getPais();
        				if (k!= (ligas.at(i)->getEquipos().at(j)->getJugadores().size() -1)){
        					Escribir<<";";
        				}else{
        					Escribir<<"}"<<endl;
						}
					}
				}
			}             
          Escribir.close(); 
        }
            
        void leer(){
                fstream Leer;
                string linea;
                ligas.clear();         
                Leer.open(ruta.c_str()); 
                if (Leer.is_open()){
					getline(Leer,linea);
                    vector <Equipo*> equipos;
                    linea=token(linea, "$",1);
                    int c=0;
                    int c3=0;
					               
                    while(! Leer.eof()){
                        string nombre=token(linea, ":", 1);
                        string pais=token(linea,":", 2);
                        equipos.clear();
                        getline(Leer, linea);
                        char a=linea[0];
                        while (a!='$'){
                        	equipos.push_back(new Equipo(token(linea,":", 1), token(token(linea, "{", 1), ":", 2)));
                        	string jugador=token(token(linea,"{", 2), "}", 1);
                        	int c1=1;
                            int c2=1;
                        	while (jugador.size() >= c2){
							 	equipos.at(c)->setJugador(new Jugador(token(token(jugador, ";", c1), "|", 1), atoi(token(token(jugador, ";", c1), "|", 2).c_str()), token(token(jugador, ";", c1), "|", 3)));
								c2+=token(linea,";", c1).size()+2;
								c1++; 
							}
							c++;
							getline(Leer, linea);
							if (Leer.eof()){
								a='$';
							}
						}
						addLiga(new Liga(nombre, pais));
						ligas.at(c3)->setEquipos(equipos);
						c3++;
                    }
                }     
                 Leer.close();
            }
                         
            void print(){
                cout<<"ligas:"<<endl;
            }             
};
#endif
