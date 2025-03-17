#include <iostream>
using namespace std;

/* 
    * Comando Do While *
        ! Do While é um loop parecido com o While
        ! ele executa pelo menos uma vez antes da parar a execução
        ! primeiro excuta o bloco de comando depois verifica a condição
*/
int main(){
    int cont;
    cont = 20;
    
    do{// do = faça ou repita, então ele faz o bloco de comando e depois verifica a condição
    	cout << "Hello World - " << cont << endl;
    	cont++;
	}while(cont < 20);
    
    cout  << "\nRotina finalizada";
	return 0;
}

