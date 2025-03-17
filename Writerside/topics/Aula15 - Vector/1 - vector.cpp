#include <iostream>
#include <vector>
using namespace std;
/* 
    *@ Vector @*
        #> É uma estrutura moderna parecida com o vetor(array) porém são diferentes;
        #> Vector é uma estrutura dinamica então não precisa definir o tamanho dela;
        #> Sintaxe::
            $ Essa é a declaração sem definir seus elementos
            vector <tipo> nomeVector;

            $> Essa é a declaração definindo seus elementos
            vector <tipo> nomeVector{
                "item1", "item2", "item3"
            }

    *& Métodos que podem ser usados no vector &*
        @> vector.push_back(valor) - insere um elemento no final 
        @> vector.push_front(valor) - insere um elemento no começo 
        @> vector.push_front(valor) - insere um elemento no começo 
        @> vector.size() - retorna o tamanho do vector (a quantidade de elementos)
        @> vector1.swap(vector2) - faz uma inversão de valores dos vectores
        @> vector.front() - mostra o primeiro valor
        @> vector.back() - mostra o ultimo valor
 */

int main(){
    int tam;
    vector <string> nomes;
    vector <int> vecNum1{
        1, 3, 5, 7, 8
    };
    vector <int> vecNum2{
        12, 34, 17, 4, 6
    };

    tam = nomes.size();

    nomes.push_back("Gustavo Henrique");
    nomes.push_back("Zakur");
    nomes.push_back("Fernanda Maria");

    //* Vai percorrer e escrever na tela os elementos
    cout << "Valores : ";
    for(int i = 0; i <= nomes.size(); i++){
        cout << nomes[i] << " | ";
    }

    cout << "\n-----------------------\n";
    //*Mostra um elementos especifico
    cout << nomes[1] << endl;
    cout << nomes[2] << endl;
    cout << nomes[3] << endl;
    
    cout << "\n-----------------------\n";
    //* Mostra o tamanho do vector
    cout << "Tamanho : " << tam << endl;

    cout << "\n-----------------------\n";
    //* Não se pode fazer isso pois a posição 4 não foi criada
    //nomes[4] = "Jubiscleyde";s
    
    cout << "\n-----------------------\n";
    //* Vai inverter os valores dos vectore
    vecNum1.swap(vecNum2);

    cout << "\n-----------------------\n";
    //* Vai mostrar o primeiro, o ultimo e o elemento do meio
    cout << "Primeiro elemento : " << nomes.front() << endl;
    cout << "Ultimo elemento   : " << nomes.back() << endl;
    cout << "Valor do meio     : " << nomes.at(tam/2) << endl;

    cout << "\n-----------------------\n";
    //* Inserir valores sem iterators é só usar o método .insert()
    //* com os metodos begin() e end() com operações (+ ou -)
    //$ Insere o elemento '777' na 1º posição, pois pega o inicio que é 0 + 1, resultando em 1 (seria essaa posição)
    vecNum1.insert(vecNum1.begin() + 1), 777;
    //$ Insere o elemento '69' na penultima posição, pois pega a ultima posição menos 1 (resultando na penultima posição)
    vecNum1.insert(vecNum1.end() - 1), 69;

    cout << "\n-----------------------\n";
    //* Vai apagar determindo elemento
    //$ pode-se determinar esse elemento usando os métodos begin e end() junto com operações do mesmo jeito do .insert()
    numVec1.erase(numVec1.begin() + 2);
    numVec2.erase(numVec2.end() - 1);

    cout << "\n-----------------------\n";
    //* .pop_back() -> Vai retirar o ultimo elemento usando
    //* .empty()    -> Verifica se o vector está vazio ou não,  retornando true ou false
    while(!numVec2.empty()){
        numVec2.pop_back();
        cout << numVec2 << endl;
    }
    
    cout << "\n-----------------------\n";
    //*Vai limpar todo o vetor
    nomes.clear();

    return 0;
}