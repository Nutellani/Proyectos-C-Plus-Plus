#include <iostream>
#include <map>

using namespace std;

/// funtions prototypes
void menu();
//void showOptions(int);

void menu(){
	cout<<"Que desea MOSTRAR?\n";
	cout<<"0 = Crucigrama\n";
	cout<<"1 = Pista 1\n";
	cout<<"2 = Pista 2\n";
	cout<<"3 = Pista 3\n";
	cout<<"4 = Pista 4\n";
	cout<<"5 = Pista 5\n\n";
}
	
/*
void showOptions(int){
	switch(option){
		case 1:
			cout
			break;
			
		case 1: 
			break;
			
		case 1: 
			break;
			
		case 1: 
			break;
			
		case 1: 
			break;	
			
		default: cout<<"OPCION INVALIDA...";
	}
}
*/

int main(int argc, char *argv[]) {
	
	/// maps initialization
	map<int, string> palabras = {
		{1, "BENNINGTON"}, {2, "TORTITAS"}, {3, "MESSI"}, {4, "TANGO"}, {5, "WOLVERINE"}
	};
	
	map<int, string> pistas = {
		{1, "Cantante de la cancion NUMB"}, {2, "Viste cuando decis, que ganas de tomar un buen mate con ..."}, {3, "D10S"}, {4, "Baile Argentino"}, {5, "El X Men mas conocido"}
	};
	/// end maps
	
	bool terminated = false;
	int option;
	
	do{
		menu();
		cin>>option;
		cout<<"\n";
		cout<<pistas[option];
		cout<<"\n\n";
	} while(!terminated); // !terminated == not terminated == terminated!=true
	
	return 0;
}

