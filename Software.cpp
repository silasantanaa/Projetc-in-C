// chamando meu arquivo de fun��es separado do main
#include "functions.h"


int main (){
	
	// usar biblioteca locale para correta acentua��o do portugu�s 
	setlocale(LC_ALL, "");
	
	
	// variaves do scope
	int option;
	
	
	// chamando as fun��es
	firstMenu();
	
	while(1){
	
	cout << "1- Registar-se." << endl;
	cout << "2- Entrar." << endl;
	cout << "3- Sair." << endl;
	
	//escolha da op��o para varivel option
	cout << endl;
	cout << "Op��o:";
	cin >> option;
	cout << endl;
	switch(option){
		
		case 3:
			functionSair();
			return 0;
			
		default:
			cout << "Op��o inv�lida, tente novamente!" << endl << endl;
		
		
}
	
}

}
