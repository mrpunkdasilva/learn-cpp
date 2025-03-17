#include <iostream>
using namespace std;

struct Carro{
    string nome;
    string cor;
    int pot;
    int velMax;    
    int vel;

    void insere(string carNome, string corCar, int stPot, int stVelMax){
        nome = carNome;
        cor = corCar; 
        pot = stPot;
        velMax = stVelMax;
        vel=0;
    };

    void mostra(){
        cout << "\n-----------------------------\n";
        cout << "Nome do carro....: " << nome << "\n";
        cout << "Cor..............: " << cor << "\n";
        cout << "Potencia.........: " << pot << "\n";
        cout << "Velocidade atual.: " << vel << "\n";
        cout << "Velocidade Maxima: " << velMax << "\n";
        cout << "-----------------------------\n";
    };

    void mudaVel(int mv){
        vel = mv;
        if(vel > velMax){
            vel = velMax;
        }
        if(vel < 0){
            vel = 0;
        }
    }
};

int main(){
    // No struct tem como usar funções dentro,ou seja integrar struct com funções 

    Carro car1, car2, car3, car4;
    

    car1.insere("Tornado", "Vermelho", 450, 350);
    car2.insere("Luxo", "Preto", 250, 260);

    car1.mostra();
    car1.mudaVel();
    car1.mostra();
    car2.mostra();

    return 0;
}