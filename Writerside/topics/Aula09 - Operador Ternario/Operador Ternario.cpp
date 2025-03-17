#include <iostream>
using namespace std;

// * Operador Ternario:
//	 ! Ele e um if so que simplificado. Tem uma execução mais rapida e simples, porém tem uma condião menos simples.
//   ! Usado em condições pequenas
// * Sintaxe:
// 		(expressão) ? verdadeiro : falso;

int main(){
	int n1, n2, nota;
	string res;

	cout << "Digite a primeira nota: ";
	cin >> n1;
	cout << "Digite a segunda nota: ";
	cin >> n2;
	
	nota = n1+n2;

	// >= 60 "Aprovado"
	// < 60 "Reprovado"

	cout << (nota >= 60) ? res="Aprovado" : res="Reprovado";
	
	res = (nota >= 60) ? "Aprovado" : "Reprovado"; //Essa é uma outra forma, diferente do de cima, o operador ternario irár dar um retorno e esse será guardado na variavel res
	
	cout << res << endl;

	return 0;
}

