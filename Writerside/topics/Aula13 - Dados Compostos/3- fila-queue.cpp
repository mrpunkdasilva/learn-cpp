#include <iostream>
#include <queue>
using namespace std;

/* 
    *=== Fila/Queue ===*
 - Essa estrutura é parecido com a pilha, porém, a Fila(Queue) é um tubo que contem dois lados abertos
 - Lembrando que o primeiro elemento a entrar é o primeiro a sair

    *=- Sintaxe -=*
        queue <tipo> nome;
    
    *== Principais metodos de filas ==*
- empty() =  esse metodo serve apra saber se está ou não vazia
- size() = ese metodo e usado para retornar o tamanho da fila
- front() = retorna o elemento da frente da pilha
- back() =  retorna o elemento de trás da pilha
- push() = metodo push() serve para inserir um valor(seria um objeto) na fila
- pop() = apaga o elementoda frente
*/

int main(){
    queue <string> cartas;
	
	cartas.push("Rei de Copas"); 
	cartas.push("Rei de Espatas -");
	cartas.push(" Rei de Ouro -");
	cartas.push(" Rei de Paus");

    cout << "Tamanho da fila.: " << cartas.size() << "\n";
    cout << "\nPrimeira Carta..: "  << cartas.front() << "\n"; //! na fila a primeira posição ou primeiro elemento é o primeiro elemento inserido
    cout << "\nUltima carta....: " << cartas.back();

    // Vai retirar todas as cartas da fila cartas
    while (!cartas.empty()){
        cout << "\nPrimeira Carta: "  << cartas.front() << "\n";
        cartas.pop();
    }

    return 0;
}