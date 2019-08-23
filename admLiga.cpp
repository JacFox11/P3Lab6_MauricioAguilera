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
                  return this->ligas;
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
                     while(! Leer.eof()){
                             getline(Leer,linea);
                             vector <string> acts;
                             string act=token(linea, ";",3);
                             int c1=1;
                             int c2=1;
							 while (act.size() >= c2){
							 	c1++;
							 	acts.push_back(token(act, ",", c1));
								c2+=token(linea,"/", c1).size()+3;
								c1++; 
							 } 
                             if(linea.size()>0){  
                                addLiga(new Liga(atoi(token(linea,";", 1).c_str()),
                                                  token(linea,";", 2),
                                                  atoi(token(linea,";", 4).c_str())
                                                  )
                                );
								ligas.at(ligas.size() -1)->setActividades(acts); 
                            }
                      }
                  }     
                 Leer.close();
            }
                         
             void print(){
                  cout<<"ligas:"<<endl;
                
                for(int i=0; i<ligas.size();i++){
				        cout<<"\t"<<"-";				    	
						ligas.at(i)->print();				    
				  }
            }             
};
#endif
