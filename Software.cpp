// chamando meu arquivo de funções separado do main
#include "functions.h"


int main (){
	
	// usar biblioteca locale para correta acentuação do português 
	setlocale(LC_ALL, "");
	
	
	// variaves do scope
	int option;
	
	
	// chamando as funções
	firstMenu();
	
	cout << "1- Registar-se." << endl;
	cout << "2- Entrar." << endl;
	cout << "3- Sair." << endl;
	
	//escolha da opção para varivel option
	cout << endl;
	cout << "Opção:";
	cin >> option;
	cout << endl;
	
	if (option==3){
		
		functionSair();
		
	}

}
