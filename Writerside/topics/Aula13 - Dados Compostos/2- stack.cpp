#include <iostream>
#include <stack>
using namespace std;

/*	
	*- Pilhas - Stack -*
 		-= Pilhas sao como tupos que só tem uma porta, essa porta voce coloca e tira elementos
 		-= Lembrando o primeiro elemento a entrar seria o primeiro a sair, o ultimo a sair seria o primeiro a entrar
 	!-= Para trabalhar com Pilhas(Stack) e necessario importar uma biblioteca chamada stack, com o comando:    
 		#include <stack>
 	! -= O tamanho da pilha não precisa ser declarado, pois a pilha tem um tamanho dinamico
	*- Sintaxe:>>
 		stack <tipo> nome_stack;

	* =-> Principais metodos para ser usado em pilhas:>>
 		- pop() | size() | push() | empty() | top()
*/
int main(){
	stack <string> cartas;
	
	cartas.push("Rei de Copas"); //! o metodo push() serve para inserir um valor(seria um objeto) na pilha
	cartas.push("Rei de Espatas -");
	cartas.push(" Rei de Ouro -");
	cartas.push(" Rei de Paus");

	stack <int> carteira;

	if(carteira.empty()){ // O metodo empty() -> serve como teste logico para saber se a stack está ou não vazia, empty retorna false(falso) caso a stack esteja vazia ou true(verdadeiro) caso a stack esteja com valor
		cout << "\n\nSem dinheiro na carteira !";
	}else{
4		cout << "Com dinheiro na carteira !";
	}

	cout << "\n\nTamanho da pilha: " << cartas.size() << "\n"; // o metodo size() -> serve para saber o tamanho da pilha

	cartas.pop(); // -> o metodo pop() serve para retirar o valor do topo da pilha

	cout << "\nTamnhao da pilha: " << cartas.size() << "\n";

	cout << "\nCarta do topo: " << cartas.top(); // esse metodo top() -> serve para exibir o valor do topo 

    return 0;
}