#include <iostream>
using namespace std;

//Comando if
int main(){
	/*
	  * Condição if no C++:*
	  	! - o if funciona com um teste logico que só sera executado caso a condição seja verdadeiro
		! - então ele seria o bloco de codigo "verdadeiro"
		 	*=> O if funciona assim:
				se(teste logico){
					se a operaçãoo for verdadeira, realizara esse bloco de codigo
				}
			*Sintaxe:
				if(teste logico){
					bloco de codigo se a condição for verdadeira
				}

	  * Condição else no C++: *
	  		! - O else funciona como a negação do if (seria o caso contrario)
			! - O else não precisa de condição porque, ele funciona assim. Caso não for aquilo é isso
			*Sintaxe:
				if(teste logico){
					bloco de codigo caso a condição seja verdadeira
				}else{
						bloco de codigo caso a condição seja o contrario, seja falso
				}
	*/

	bool sOn = 0;
	char opc = 'g';

	if(sOn){
		cout << "Bom dia";
	}if(sOn == 0){
	    cout << "Vai dormir";
	}

	return 0;
}

