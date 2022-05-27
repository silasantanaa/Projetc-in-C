#include <iostream>
#include <locale>

// usar biblioteca locale para correta acentua��o do portugu�s

using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	
	cout << "Come�o de tudo!! ;D";
	
}
