#include <iostream>
using namespace std;
/* 
	* Sobrecarga de função *
		! -= Para ter uma sobrecarga de funcao necesita que:
 			+- as funções ter o mesmo nome, mas não podem ter os mesmos argumentos, isso seria uma sbrecarga
*/
void soma();
void soma(int n1, int n2);

int main(){
	// ! abaixo vemos que existe duas funções com o mesmo nome, porém, elas não tem os mesmos argumentos
	soma();
	soma(23,98);
	return 0;
}

void soma(int n1, int n2){
	int re;
	re = n1 + n2;
	cout << "\n Soma de " << n1 << " + " << n2 << " = " << re;
}

void soma(){
	int n1, n2, re;
	n1 = 10;
	n2 = 20;
	re = n1 + n2;
	cout << "A soma de " << n1 << " com " << n2 << " resulta em " << re;
}
