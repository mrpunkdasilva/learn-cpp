#include <iostream>
using namespace std;

/*
 	* Sintaxe do for: * 
! var_control = variavel de controle / cond = condição / inc = incremendo | dec = decremento
	    for(var_control; cond; inc/dec){  
			comandos
	    }
	* Pode ter mais de uma condição e variavel de inicialização *
		for(cont=0, y=0; cont <= 10  && y <= 10; cont++, y+=2){
			cout << " - " << y << endl;
		}
*/
int main(){	
	int x,y, cont, x, opc;

    for(cont=0, y=0; cont <= 10; cont++, y+=2){
	  cout << " - " << y << endl;
	}

	//! Tabuada usando o laço for, com um numero que o usuario digitar
	cout << "Digite qual a tabuada voce vai querer> ";
	cin >> opc;

	cout << "\n";
	for(x=0; x<11; x++){
		cout << opc << " * " << x << " = " << opc * x << endl;
	}

	return 0;
}

