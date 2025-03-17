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
    // * Vamos aprender associar arrays com struct
    Carro *carros = new Carro[5];
    Carro car1, car2, car3, car4;
    
    carros[0]=car1;carros[1]=car2;carros[2]=car3;carros[4]=car4;

    return 0;
}