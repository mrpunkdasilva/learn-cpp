#include <iostream>
using namespace std;

//Constantes não são variaveis, pois a variavel pode ser alterada, já a constante não pode
//Se deve definir uma constante com o comando define, desse jeito:
#define nome "Gustavo Shoter" //quando tiver jogo da velha (#)

#define cumprimento cout << "Hello World \n"; //A constante tambem pode receber comandos como, cout
//para que o comando funcione é só chamar a constante no programa, como abaixo

int main(){
	//  Declaração multiplas de variaveis
	//1º para fazer isso as variaveis devem ser do mesmo tipo
	//2º declare o tipo delas em seguida o nome delas e use a virgula para separar cada uma delas:-
 	//   int vidas, tiros, balas;  <-- isso ai é igual a isso --> int vidas; int tiros; int balas;

	// Declaração e inicialização das variaveis
	int nota1=6, nota2=6, media=6; //Esse é o outro jeito de declarar vocÊ já pode colocar os valores nas declarações
	
	cout << "\n" << nome << "\n";
	cumprimento
	
	return 0;
}
