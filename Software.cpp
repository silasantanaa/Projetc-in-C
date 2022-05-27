// chamando meu arquivo de funções separado do main
#include "functions.h"


int main (){
	
	// usar biblioteca locale para correta acentuação do português 
	setlocale(LC_ALL, "");
	
	
	// variaves do scope
	int option;
	
	
	// chamando as funções
	homeMenu();
	
	//usando loop para não encerrar a aplicação
	while(1){
	
	cout << "1- Registar-se." << endl;
	cout << "2- Entrar." << endl;
	cout << "3- Sair." << endl;
	
	//escolha da opção para varivel option
	cout << endl;
	cout << "Opção:";
	cin >> option;
	cout << endl;
	
	//bloco de código utilizando switch case
	switch(option){
		
		case 1:
			createUser();
		
			break;
		case 2:
			firstMenu();
			break;
			secondMenu();
			break;
		case 3:
			functionSair();
			return 0;
		default:
			cout << "Opção inválida, tente novamente!" << endl << endl;
}
	
}

}
