#include <iostream>
using namespace std;

/* 
	* === Vetores/Arrays === *
		! arrays ou vetores é uma coleção de variaveis do mesmo tipo, unidimensional
 	* para iniciar um vetor deve sre feito, assim:
 		- tipo nome[tamanho]; | int carros[5];
		- tipo nome[tamanho] = {valor1, valor2, valor3}; | int vetor[5] = {12,121,212,12,16}
*/
int main(){
	 string vetor[5]; // ficar atento ao tamanho definido do vetor, lembrando que o indice começa do 0
	 // ex:> int vetor[5]; os espaçõs vão começar do 0, logo tera 4 posições, porém terá 5 elementos
	 int i;

	 vetor[0] = "Vai tomar no cu";
	 vetor[1] = "Fude gostoso a tua mãe";
	 vetor[2] = "Comi o cu da sua irma";
	 vetor[3] = "Foda se, esse mundo de mierda";
	 vetor[4] = "Viado do karalho";

	 // * É usado o for para percorrer ou preencher um array:>>
  for(i=0; i < sizeof(vetor)/4 ; i++){ //sizeof() verifica o tamanho do vetor dividindo por 4
    cout << i << " - " << vetor[i] << endl;
  }
  

	return 0;
}

