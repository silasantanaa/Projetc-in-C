#include "functions.h"

    char user[11];
	string password;
	string passwordd;

void homeMenu(){

	cout << "########## ";
	cout << "Bem-Vindo";
	cout << " ##########";
	cout << endl;
	cout << endl;

	cout << "SILAS SANTANA\n";
	cout << "E-mail: silassantana@outlook.com\n\n";

	cout << "Para ter acesso a funcionalidades do programa � necess�rio criar um usu�rio!" << endl << endl;
}

createUser(){

	int count = 0;

	cout << "Insira o nome de usu�rio, max 10 caracteres:";
	cin >> user;
	count = strlen(user);

	if(count>=11){
		cout << "S� � permitido o m�ximo de 10 caracteres!" << endl << endl;
		return createUser();
	}

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

void functionSair(){

    for(int sec =3; sec >=1; sec--){

    	cout << "Saindo em " << sec << endl;

    	Sleep(1000);

	}
	cout << "Voc� saiu com sucesso!" << endl << endl;
}

firstMenu(){

	int count = 0;
	string userr;
	string passworddd;

	cout << "Digite seu nome de usu�rio:";
	cin >> userr;

	if(userr!=user){
		cout << "Usu�rio inv�lido!" << endl << endl;
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
		cout << "Ol� " << userr <<", voc� logou com sucesso!" << endl;
		cout << endl;

	}

	return 0;
}

// Fun��es do segundo Menu
void functionTabuada(){

	int num = 0;
	string choose;

	cout << "Digite a tabuada que voc� deseja:";
	cin >> num;

	for(int y = 1; y <=10; y++){

		cout << y << " x " << num << " =" << y*num << endl;
	}

	cout << "Voc� quer continuar fazendo tabuada? Y ou N:";
	cin >> choose;
	if(choose== "Y" or choose=="y"){
		cout << "Resetando a tabuada!" << endl << endl;
		return functionTabuada();
	}

}

// Fun��o retornar Menu Principal
retornarMain(){

    int sec = 3;
    while (sec >=1){
        cout << "Saindo em " << sec << endl;
        sec --;
        Sleep(1000);
    }

    cout << "Retornando ao Menu Principal!" << endl << endl;
    Sleep(1500);
    system("cls");
    return 0;
}

retornarSecondMenu(){
	cout << "Retornando ao Menu do Usu�rio!" << endl << endl;

	// Fun��o retornar Menu Usu�rio
    secondMenu();
	return 0;
}

functionHour(){

    return 0;
}

secondMenu(){

	int optionSwitch = 0;
	string convert;

	while(1){

	cout << "##### Menu #####" << endl;
	cout << "1- ." << endl;
	cout << "2-Hor�rio." << endl;
	cout << "3-Tabuada." << endl;
	cout << "4-Alterar Informa��es." << endl;
	cout << "5-Sair." << endl;

	cout << endl;
	cout << "Op��o:";
	cin >> convert;
	istringstream(convert) >> optionSwitch;
	cout << endl;

	switch(optionSwitch){

        case 2:
            functionHour();

		case 3:
			functionTabuada();
			retornarSecondMenu();

		case 5:
			retornarMain();
			homeMenu();
			return 0;

		default:
			cout << "Op��o inv�lida, tente novamente!" << endl << endl;
	}

	}
}
