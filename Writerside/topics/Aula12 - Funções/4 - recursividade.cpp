#include <iostream>
using namespace std;

/* 
	*Recursividades - Funcoes recursivas
		! /-> Sao funcoes que chamam a si proprias
		! /-> E para cada chamada, é criada um novo registro de variaveis e uma nova função
*/

void contador(int num, int cont=0);

int main(){
	contador(10);

	return 0;
}
// ! Se liga porra nesse exemplo aqui viado:>>
void contador(int num, int cont){
	cout << cont << "\n";
	if(num > cont){
		contador(num, ++cont);
	}
}
