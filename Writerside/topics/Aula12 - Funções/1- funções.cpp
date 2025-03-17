#include <iostream>
using namespace std;

/* 
	*Funções
		! Funções são blocos de codigos usados para uma determinada finalidade
		! Funções sem sreem a principal, devem ser criados depois da funcao principal, porque e uma boa pratica
		! Para quea funcao funcione precisa prototipar ela
		! Para isso é sé depois de criar você coloca antes das funcão principal o tipo de retorno e o nome dela 
		! Prototipar é apresentar ao programa principal a função
*/

//! Abaixo vemos prototipação de funções:>
void texto();
void soma(int n1, int n2);
int soma2(int N1, int N2);
void tr(string tra[4]);

int main(){
	string transp[4] = {
		"Carro", "Moto", "Aviao", "Tanque"
	};
	
	texto();
	soma(23,53);

	int res = soma2(45, 67);

	cout << "A soma retorna: " << res;
	tr(transp);

    return 0;
}

/*
  * A primeira coisa a se fazer é - *
 	! Definir o tipo de retorno da funcao em seguida o nome e seus argumentos, por ulimmo o bloco de codigos da função;
 		? Sintaze da funcao:>>
			tipo nome(argumentos){
	 			bloco de codigos
			}
*/

void texto(){
	 cout << "\nHello World";
}

void soma(int n1, int n2){
	cout << "Soma dos valores: " << n1+n2 << "\n";
}

// ! Para qualquer função que não seja do tipo void pode se usar o return, na void ele não terá retorno por isso não usa o return | void seria = nulo
int soma2(int N1, int N2){
	return N1 + N2;
}

void tr(string tra[4]){
	for(int i=0; i < 4; i++){
		cout << "\n" << tra[i] << " - ";
	}
}
