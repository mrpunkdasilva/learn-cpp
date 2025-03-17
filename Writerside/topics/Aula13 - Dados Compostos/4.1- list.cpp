#include <iostream>
#include <list>
using namespace std;

/*
    *# Listas - é cmo um vetor porém tem metodos diferentes, para a list funcionar tem que importar a lib <list>
        !#> sintaxe da list:
          list <tipo> nome_list;
    
    *@ Principais metodos da list
        !- push_front() => coloca na primeira posicao
        !- push_back() => coloca na ultima posicao
        !- pop_front() => retira na primeira posivcao
        !- pop_back() => retira na ultima posicao
        !- reverse() => inverte a ordem da list
        !- sort() => ordena a list
        !- size() => retorna o tamanho da list
*/
int main(){
    list <int> aula;    
    int tam;

    //--- Com esses comandos da pra colocar um elemento em determinada posicao na list
    list<int>::iterator it; // aqui cria o iterator

    it = aula.begin(); // aqui associa o iterator a aula com o metodo begin(), esse metodo serve pra avançar

    advance(it, 7); //coloca o nome do iterator e em que posicao estará p elemento

    aula.insert(it, 0) // ja aqui define o iterator e o valor a ser colocado na posicao definida acima, o valor tem que corresponder ao tipo da list
    //-------

    //* Preenchimento da list vai preencher a list:>>
    tam = 10;
    for(int i=0; i<tam; i++){
        aula.pop_front(i);
    }

    cout << "Tamanho da lista: " << aula.size() << "\n";

    aula.sort();

    //Aqui vai exibir o primeiro valor e apagar ele
    tam = aula.size();
    for (int i= 0; i < tam; i++){
        cout << aula.front() << "\n";
        aula.pop_front();
    }   

    return 0;
}