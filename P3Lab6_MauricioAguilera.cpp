#include "admLiga.cpp"
#include <ctime>
#include <cstdlib>

admLiga al("./ligas.txt");

void Adminliga();
void Adminequipo(int);
void Adminjugador(int, int);

int main(){
	char op='0';
	while (op!='8'){
		system("cls");
		cout<<"...:::MENU PRINCIPAL:::..."<<endl;
		cout<<"1. Administrar ligas"<<endl<<
		"2. Administar equipos"<<endl<<
		"3. Administrar Jugadores"<<endl<<
		"4. Jugar partido"<<endl<<
		"5. Cargar Archivo"<<endl<<
		"6. Escribir Archivo"<<endl<<
		"7. Mostrar tabla"<<endl<<
		"8. Salir"<<endl<<
		"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				Adminliga();
				break;
			}
			case '2':{
				system("cls");
				if (al.getN()>0){
					for (int i=0; i<al.getN(); i++){
						cout<<i<<". "<<al.getLigas().at(i)->getNombre()<<endl;
					}
					int pos;
					cout<<"Ingrese una posicion: ";
					cin>>pos;
					Adminequipo(pos);
				}else{
					cout<<"No se puede crear equipos sin ligas existentes"<<endl;
					system("pause");
				}
				break;
			}
			case '3':{
				system("cls");
				if (al.getN()>0){
					for (int i=0; i<al.getN(); i++){
						cout<<i<<". "<<al.getLigas().at(i)->getNombre()<<endl;
					}
					int pos;
					cout<<"Ingrese una posicion: ";
					cin>>pos;
					if (al.getLigas().at(pos)->getEquipos().size()>0){
						system("cls");
						for (int i=0; i<al.getLigas().at(pos)->getEquipos().size(); i++){
							cout<<i<<". "<<al.getLigas().at(pos)->getEquipos().at(i)->getNombre()<<endl;
						}
						int pos2;
						cout<<"Ingrese una posicion: ";
						cin>>pos;
						Adminjugador(pos, pos2);
					}else{
						cout<<"No se puede crear jugadores sin equipos existentes en esta liga"<<endl;
						system("pause");
					}
				}else{
					cout<<"No se puede crear equipos sin ligas existentes"<<endl;
					system("pause");
				}
				break;
			}
			case '4':{
				srand(time(0));
				int p=(rand() % 10);
				srand(time(0));
				break;
			}
			case '5':{
				al.leer();
				system("cls");
				cout<<"Archivo exitosamente cargado"<<endl;
				system("pause");
				break;
			}
			case '6':{
				al.escribir();
				system("cls");
				cout<<"Archivo exitosamente actualizado"<<endl;
				system("pause");
				break;
			}
			case '7':{
				system("cls");
				if (al.getN()>0){
					cout<<"Seleccione una liga"<<endl;
					for (int i=0; i<al.getN(); i++){
							cout<<i<<". "<<al.getLigas().at(i)->getNombre()<<endl;
					}
					int pos;
					cout<<"Ingrese una posicion: ";
					cin>>pos;
					system("cls");
					for (int i=0; i<al.getLigas().at(pos)->getEquipos().size(); i++){
						al.getLigas().at(pos)->getEquipos().at(i)->print();
					}
					system("pause");
				}else{
					cout<<"No hay ligas presentes para crear la tabla"<<endl;
					
				}
				break;
			}
			case '8':{
				system("cls");
				system("pause");
				return 0;
				break;
			}
			default :{
				system("cls");
				cout<<"Esta opcion no es valida, intentelo de nuevo"<<endl;
				system("pause");
				break;
			}
		}
	}
	
}

void Adminliga(){
	char op='0';
	while (op!='3'){
		system("cls");
		cout<<"ADMINISTAR LIGAS"<<endl;
		cout<<"1. Agregar liga"<<endl<<
		"2. Eliminar liga"<<endl<<
		"3. Regresar"<<endl<<
		"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				system("cls");
				string nombre, pais;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Pais: ";
				cin>>pais;
				al.addLiga(new Liga(nombre, pais));
				cout<<"Liga agregada"<<endl;
				system("pause");
				break;
			}
			case '2':{
				system("cls");
				for (int i=0; i<al.getN(); i++){
					cout<<i<<". "<<al.getLigas().at(i)<<endl;
				}
				int pos;
				cout<<"Ingrese una posicion: ";
				cin>>pos;
				al.remLiga(pos);
				system("cls");
				cout<<"Liga eliminado"<<endl;
				system("pause");
				break;
			}
			case '3':{
				
				break;
			}
			default:{
				system("cls");
				cout<<"Esta opcion no es valida, intentelo de nuevo"<<endl;
				system("pause");
				break;
			}
		}
	}
	
}

void Adminequipo(int pos){
	char op='0';
	while (op!='3'){
		system("cls");
		cout<<"ADMINISTAR EQUIPOS"<<endl;
		cout<<"1. Agregar equipo"<<endl<<
		"2. Eliminar equipo"<<endl<<
		"3. Regresar"<<endl<<
		"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				system("cls");
				string nombre, fundacion;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Fundacion: ";
				cin>>fundacion;
				al.getLigas().at(pos)->setEquipo(new Equipo(nombre, fundacion));
				cout<<"Equipo agregada"<<endl;
				system("pause");
				break;
			}
			case '2':{
				system("cls");
				for (int i=0; i<al.getLigas().at(pos)->getEquipos().size(); i++){
					cout<<i<<". "<<al.getLigas().at(pos)->getEquipos().at(i)->getNombre()<<endl;
				}
				int pos2;
				cout<<"Ingrese una posicion: ";
				cin>>pos;
				al.getLigas().at(pos)->remEquipo(pos2);
				system("cls");
				cout<<"Equipo eliminado"<<endl;
				system("pause");
				break;
			}
			case '3':{
				
				break;
			}
			default:{
				system("cls");
				cout<<"Esta opcion no es valida, intentelo de nuevo"<<endl;
				system("pause");
				break;
			}
		}
	}
}

void Adminjugador(int pos, int pos2){
	char op='0';
	while (op!='3'){
		system("cls");
		cout<<"ADMINISTAR JUGADORES"<<endl;
		cout<<"1. Agregar jugador"<<endl<<
		"2. Eliminar jugador"<<endl<<
		"3. Regresar"<<endl<<
		"Ingrese una opcion: ";
		cin>>op;
		switch (op){
			case '1':{
				system("cls");
				string nombre, pais;
				int dorsal;
				cout<<"Nombre: ";
				cin>>nombre;
				cout<<"Dorsal: ";
				cin>>dorsal;
				cout<<"Pais: ";
				cin>>pais;
				al.getLigas().at(pos)->getEquipos().at(pos2)->setJugador(new Jugador(nombre, dorsal, pais));
				cout<<"Jugador agregada"<<endl;
				system("pause");
				break;
			}
			case '2':{
				system("cls");
				for (int i=0; i<al.getLigas().at(pos)->getEquipos().at(pos2)->getJugadores().size(); i++){
					cout<<i<<". ";
					al.getLigas().at(pos)->getEquipos().at(pos2)->getJugadores().at(i)->print();
				}
				int pos3;
				cout<<"Ingrese una posicion: ";
				cin>>pos;
				al.getLigas().at(pos)->getEquipos().at(pos2)->remJugador(pos3);
				system("cls");
				cout<<"Liga eliminado"<<endl;
				system("pause");
				break;
			}
			case '3':{
				
				break;
			}
			default:{
				system("cls");
				cout<<"Esta opcion no es valida, intentelo de nuevo"<<endl;
				system("pause");
				break;
			}
		}
	}
}

