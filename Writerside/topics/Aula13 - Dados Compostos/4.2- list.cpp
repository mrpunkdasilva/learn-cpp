#include <iostream>
#include <list>
using namespace std;

/* 
    *@Principais metodos de Lists
        !- erase => serve para apagar um determinado elemento da list, usando
            =- sintaxe: 
                lista.erase()
        !- merge => esse metodo serve para colocar elementos de uma lista em outra deixando uma lista vazia, aquela que o merge vai pegar os elementos:> 
            =- sintaxe: 
                lista1.merge(lista2);
        !- clear => serve para limpar uma lista por completa
            =- sintaxe:
                lista.clear()
*/

int main(){
    list <int> aula, teste;    
    int tam;
    list<int>::iterator it; 

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    tam = 10;
    for(int i=0; i<tam; i++){
        aula.push_front(i);
    }

    aula.merge(teste);//! vai pegar os elementos da list teste e colocar na list aula, deixando list teste sem elemento

    it = aula.begin();
    advance(it, 3); 
    aula.erase(--it); //! só precisa colocar o iterator decrementando e precisa usar o advance() para que it recebe a posição

    cout << "Tamanho da lista: " << aula.size() << "\n";

    tam = aula.size();
    for (int i= 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }   

    return 0;
}