#include <iostream>
using namespace std;

// *Inversão de valores em variaveis*
//	? Existem algumas formas: 

int main(){

	int num = 10;
	cout << num << "\n\n";

	//num = num * -1; <= dessa forma ele inverte o valor e grava
	num = num * -1;
	cout << num << "\n\n";

	//num *= -1; <= forma inchuda de inverter, é a mesma coisa da anterior
	num =- num;
	cout << num << "\n\n";
	
	//cout << -num << "\n\n"; <= dessa forma apenas exibe o valor invertido mas não grava ele

	cout << -num << "\n\n";

	return 0;
}

