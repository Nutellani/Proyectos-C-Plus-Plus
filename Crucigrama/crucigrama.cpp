#include <iostream>
#include <string>
#include <map>

using namespace std;

/// funtions prototypes
void menu();
void showMatrix(string matrix [14][15]);
//void showOptions(int);

void menu(){
	cout<<"\nQue desea MOSTRAR?\n\n";
	cout<<"1 = Pista 1\n";
	cout<<"2 = Pista 2\n";
	cout<<"3 = Pista 3\n";
	cout<<"4 = Pista 4\n";
	cout<<"5 = Pista 5\n\n";
	cout<<"Ingrese opcion: ";
}
	
void showMatrix(string matrix [14][15]){
	
	for(int i = 0; i <14; i ++){
		for (int j = 0; j <15; j ++){
			cout<< matrix[i][j] << " ";
		}
		cout<< endl;
	}
	
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
	
	/// maps initializations
	map<string, string> palabras = {
		{"1", "BENNINGTON"},
		{"2", "TORTITAS"},
		{"3", "MESSI"},
		{"4", "TANGO"},
		{"5", "WOLVERINE"}
	};
	
	map<string, string> pistas = {
		{"1", "1: Cantante de la cancion \"NUMB\""}, 
		{"2", "2: Viste cuando decis, que ganas de tomar un buen mate con ..."}, 
		{"3", "3: D10S"}, 
		{"4", "4: Baile Argentino"}, 
		{"5", "5: El X Men mas conocido"}
	};
	/// end maps
	
	/// matriz inicialization
	string matrix[14][15] = {
		{" ", " ", "5", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", "2", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " "},
		{"1", "#", "#", "#", "#", "#", "#", "#", "#", "#", "#", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", "4", "#", "#", "#", "#", "#", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " "},
		{" ", " ", "#", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " "},
		{" ", " ", " ", " ", " ", " ", " ", " ", " ", "#", " ", " ", " ", " ", " "},
		{" ", " ", " ", " ", " ", "3", "#", "#", "#", "#", "#", " ", " ", " ", " "},
		{" ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "}
	};
	/// end matriz
	
	bool terminated = false;
	string option;
	
	do{
		
		menu();
		cin >> option;
		cout << "\n";
		
		if (palabras.count(option) <= 0) {
			cout << "Opción inválida! Reintente" << endl;
			continue;
		}
		
		cout << pistas[option];
		cout << "\n\n";
		showMatrix(matrix);
		
	} while(!terminated); // !terminated == not terminated == terminated!=true
	
	return 0;
}

