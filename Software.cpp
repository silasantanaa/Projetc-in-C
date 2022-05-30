// chamando arquivo de fun��es separado do main
#include "functions.h"


int main (){

	// usar biblioteca locale para correta acentua��o do portugu�s
	setlocale(LC_ALL, "");


	// variaves do scope
	int option;
	string convert;


	// chamando as fun��es
	homeMenu();

	// usando loop para n�o encerrar a aplica��o
	while(1){

	cout << "1- Registar-se." << endl;
	cout << "2- Entrar." << endl;
	cout << "3- Sair." << endl;

	//escolha da op��o para varivel option
	cout << endl;
	cout << "Op��o:";
	cin >> convert;

	// header para converter string em int
	istringstream(convert) >> option;
	cout << endl;

	// bloco de c�digo utilizando switch case
	switch(option){

		case 1:
			createUser();
			break;
		case 2:
			firstMenu();
			secondMenu();
			break;
		case 3:
			functionSair();
			system("pause");
			return 0;
		default:
			cout << "Op��o inv�lida, tente novamente!" << endl << endl;
}

}

}
