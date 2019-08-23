#include "admLiga.cpp"

admLiga al("./ligas.txt");

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
				
				break;
			}
			case '2':{
				
				break;
			}
			case '3':{
				
				break;
			}
			case '4':{
				
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

