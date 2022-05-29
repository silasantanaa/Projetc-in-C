#include <iostream>
#include <locale>
#include <string.h>

using namespace std;
	
	char user[11];
	int password = 0;
	int passwordd = 0;
	
	
void homeMenu(){
	
	cout << "########## ";
	cout << "Bem-Vindo";
	cout << " ##########";
	cout << endl;
	cout << endl;
	
	cout << "SILAS SANTANA\n";
	cout << "E-mail: silassantana@outlook.com\n\n";
	
	cout << "Para ter acesso a funcionalidades do programa é necessário criar um usuário!" << endl << endl;
}

createUser(){
	
	int count = 0;
	
	cout << "Insira o nome de usuário, max 10 caracteres:";
	cin >> user;
	count = strlen(user);
	
	if(count>=11){
		cout << "Só é permitido o máximo de 10 caracteres!" << endl << endl;
		return createUser();
	}
	
	cout << "Insira sua senha:";
	cin >> password;
	cout << "Insira novamente sua senha:";
	cin >> passwordd;
	cout << endl;
	
	if(password != passwordd){
		cout << "As senhas não são iguais!" << endl << endl;
	}
	else{
		cout << "Conta criada com sucesso!" << endl << endl;
		return 0;
	}
	return createUser();
}

void functionSair(){

    for(int sec =3; sec >=1; sec--){
    	
    	cout << "Saindo em " << sec << endl;
    	
	} 
	cout << "Você saiu com sucesso!" << endl << endl;
}

firstMenu(){
	
	int count = 0;
	string userr;
	int passworddd = 0;
	
	cout << "Digite seu nome de usuário:";
	cin >> userr;
	
	if(userr!=user){
		cout << "Usuário inválido!" << endl << endl;
		count++;
		return firstMenu();
	}

	cout << "Digite sua senha:";
	cin >> passworddd;
	
	if(passworddd!=password){
		cout << "Senha incorreta!" << endl;
		return firstMenu();
	}
	else{
		cout << endl;
		cout << "Olá " << userr <<", você logou com sucesso!" << endl; 
		cout << endl;
		
	}
}

secondMenu(){
	
	int optionSwitch = 0;
	
	while(1){
	
	cout << "##### Menu #####" << endl;
	cout << "1- ." << endl;
	cout << "2-Horário." << endl;
	cout << "3-Tabuada." << endl;
	cout << "4-Sair." << endl;
	
	cout << endl;
	cout << "Opção:";
	cin >> optionSwitch;
	cout << endl;
	
	
	switch(optionSwitch){
		
		case 4:
			functionSair();
			return 0;
			
		default:
			cout << "Opção inválida, tente novamente!" << endl << endl;
	}
	
	}
}

