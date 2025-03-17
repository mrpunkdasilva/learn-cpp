#include <iostream>
using namespace std;

/*
    *= Struct =*
        !- Define um tipo de dado é como um dicionario 
        ! Sintaxe:>>
            struct Nome_Struct{
                tipo propriedade;
                tipo propriedade;
                tipo propriedade;
            };

        !- Para indicar que uma variavel recebe essa estrutura é assim, cria o struct e define a variavel a esse struct, desse jeito:
          Nome_Struct variavel;

        ?Pode ter mais de uma variavel recebendo struct
            Nome_Struct variavel1, variavel2, variavel3;

        ! Para colocar um valor na propriedade da variavel associada ao struct é desse jeito:
            variavel.propriedade="valor";    
            var.propriedade=121221;

        !Para exibir essa propriedad,e seria assim:
            variavel.propriedade;
            carro.marca;

        ? O struct pode ser associado a não só por variaveis simples,por exemplo, poderia criar um struct e usar com vetor ou matrizes 
*/

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;
};

int main(){
    Carro car1;
    Carro car2;

    car1.nome="Turnador";
    car1.cor="Vermelho e Preto";
    car1.pot=450;
    car1.velMax=350;

    car2.nome="Luxo";
    car2.cor="Preto e Dourado";
    car2.pot=250;
    car2.velMax=290;

    cout << "Nome do carro....: " << car1.nome << "\n";
    cout << "Cor..............: " << car1.cor << "\n";
    cout << "Potencia.........: " << car1.pot << "\n";
    cout << "Velocidade Maxima: " << car1.velMax << "\n";

    cout << "-----------------------------\n";

    cout << "Nome do carro....: " << car2.nome << "\n";
    cout << "Cor..............: " << car2.cor << "\n";
    cout << "Potencia.........: " << car2.pot << "\n";
    cout << "Velocidade Maxima: " << car2.velMax << "\n";

    return 0;
}