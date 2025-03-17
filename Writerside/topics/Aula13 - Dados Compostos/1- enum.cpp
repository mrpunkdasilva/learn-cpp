#include <iostream>
using namespace std;

/* 
	*== Enum ==*
  ! E um tipo de numeros inteiros sequencial (ou seja e em sequencia), so armazena valores inteiros.
  ! E no Enum tem identificadores que são strings
    * Sintaxe do enum:
		enum nome{valore1, valor2};

*/
int main(){
	// *- Por padrao cada valor possui ja uma enumeração:>>
	
	enum armas{
	//!    0       1 	    2      3
		fuzil, revolver, rifle, escopeta
	};
	
	//* Esse é um jeito de inserir direto um numero sem ser o padrão, lembrando se nao for inserido o valor sera usado o valor do anterior
	enum armas2{
		fuzils=100, revolveres=30, rifles=12, escopetas=24
	};

	armas2 armasSel2;
	cout << armasSel2 << "\n";

	//! Se deve colocar o nome do enum antes da variavel, para chamar e usar ele, pois fuciona como um tipo
	armas armasSel;
	
	armasSel = fuzil; //! a variavel armaSel recebe o valor de fuzil que seria (0) o valor padrao da sequencia
	cout << armasSel; //! vai printar o valor inteiro do indice do fuzil
	
	return 0;
}

