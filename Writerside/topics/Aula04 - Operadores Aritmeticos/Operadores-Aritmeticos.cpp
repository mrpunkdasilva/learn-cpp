#include <iostream>
using namespace std;

// Variaveis Globais --> são variaveis que podem ser usadas pelo programa todo
// Variaveis Locais --> são variaveis que só podem ser usadas naquele escopo, ou seja, em um bloco de codigo especifico aonde foi declarada
int n1, n2;

int main(){
	/* 
	*Operadores Aritmeticos: 
		!	+  = (soma); 
		!	- = (subtração); 
		!	* = (multiplicação); 
		!	/ = (divisão); 
		!	% = (mod)*

	*Ordem de precedencia <- (a ordem que define a ordem dos operadores aritmeticos):
		!	1º => (); 
		!	2º => % 
		!	3º => * e / 
		!	4º => + e -
	*/
	int n3, n4;
	int res1, res2;
	
	n1 = 1;
	n2 = 3;
	n3 = 5;
	n4 = 2;
	
	res1 = n1/n2;
	res2 = n1%n2;

	cout << "\nDivis: " << res1 << "\n\n";
	cout << "\nResto: " << res2 << "\n\n";
	
	return 0;
}
