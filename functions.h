#include <iostream>
#include <locale>

using namespace std;

    string user;
	int password = 0, passwordd = 0;

createUser(){
	
	cout << "Insira o nome de usu�rio:";
	cin >> user;
	cout << "Insira sua senha:";
	cin >> password;
	cout << "Insira novamente sua senha:";
	cin >> passwordd;
	cout << endl;
	
	if(password != passwordd){
		cout << "As senhas n�o s�o iguais!" << endl << endl;
	}
	else{
		cout << "Conta criada com sucesso!" << endl << endl;
		return 0;
	}
	return createUser();
}

firstMenu(){
	
	int count = 0;
	string userr;
	int passworddd = 0;
	
	cout << "Digite seu nome de usu�rio:";
	cin >> userr;
	
	if(userr!=user){
		cout << "Usu�rio inv�lido!" << endl;
		return firstMenu();
	}

	cout << "Digite sua senha:";
	cin >> passworddd;
	
	if(passworddd!=password){
		cout << "Senha incorreta!" << endl;
		return firstMenu();
	}
	else{
		cout << "Voc� logou com sucesso!" << endl; 
		cout << endl;
	}
}

void homeMenu(){
	
	cout << "########## ";
	cout << "Bem-Vindo";
	cout << " ##########";
	cout << endl;
	cout << endl;
	
	cout << "Para ter acesso a funcionalidades do programa � necess�rio criar um usu�rio!" << endl << endl;
}

void functionSair(){

    for(int sec =3; sec >=1; sec--){
    	
    	cout << "Saindo em " << sec << endl;
    	
	} 
	
	cout << "Voc� saiu com sucesso!";
}
