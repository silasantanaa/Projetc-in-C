#include <iostream>
#include <locale>

// usar biblioteca locale para correta acentuação do português

using namespace std;

int main (){
	
	setlocale(LC_ALL, "");
	
	cout << "Começo de tudo!! ;D";
	
}
