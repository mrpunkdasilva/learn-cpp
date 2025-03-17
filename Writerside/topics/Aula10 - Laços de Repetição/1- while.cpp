#include <iostream>
using namespace std;

/* 
	* Laço While 
 		! - é um laço de repetição que é usado quando tem uma parada determinada ou indeteminada
	! Tem que se preocupar com a parada, porque pode acabar virando um loop infinito se não tiver uma parada

	* Sintaxe
		while(expressão){
		  comandos;
		}
	*/
*/
int main(){

	int cont; // essa seria a variavel de controle, para controlar o laço
	
	while(true){
	  cont++; // esse seria o incremento
	  cout << cont << " Canal fessor Bruno" << "\n";
	  
	  if(cont > 20){
		break; //Esse comando serve para interromper um loop ou programa/ interrompe as interações
	  }
	}

	return 0;
}
