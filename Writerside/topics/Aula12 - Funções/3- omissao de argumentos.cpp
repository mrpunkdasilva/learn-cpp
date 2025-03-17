#include <iostream>
using namespace std;

/* 
	* Omissao de argumentos *
		+=> A omissão de argumentos é usada para quando você não quiser exibir um certo argumento, por exemplo quando não precisa exibir de inicio

		+=> Para isso você coloca um valor default no argumento do prototipo da função
			+=-> valor default seria valor nenhum, se a função for do tipo numerico colar 0, se não for colcar " " (aspas vazias)
*/
void imp(string txt=""); //! O argumento foi omitido com um valor default

int main(){
	imp("Hello World");

	return 0;
}

void imp(string txt){
	cout << "\n" << txt << "\n";
}
