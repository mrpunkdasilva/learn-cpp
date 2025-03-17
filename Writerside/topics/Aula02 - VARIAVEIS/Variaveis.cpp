#include <iostream>

using namespace std;

/*     Tipos Primitivos em C++
#tipo numericos:
	int = inteiro = 3, 4, 345, -2, -4 (numeros inteiros e positivo e negativo)
	double = numero decimal, que recebe bem + casas decimais = 2.333333, 3.00909090
	float = numero decimal, porem recebe menos casas decimais = 2.939, 9.5

#tipo caractere:
	char = recebe letra(deve ser colocada entre apostrofo) = 'A'
	string = seria texto, cadeia de caractere(deve ser colocado entre aspas) = "HELLO WORLD", "FDP"

#tipo logico:
	bool = tipo booleano, true = verdaeiro ou false = falso(para usar os valores de ser escrito daquele jeito)
*/

//Para iniciar e tipar uma variavel em C++ existem dois jeitos
//Se não for definido,o C++ recebe o valor 0(se for numero), se for texto recebe nada
int main() {
	// TIPO NOME;
	int n;
	double decimal1;
	float decimal2;

	//TIPO NOME = VALOR;
	bool vivo = true;
	string texto = "Hello World!";

	cout << "Digite um numero: "; //cout seria saido do comando
	cin >> n; // O comando cint vai pedir para o usuario inserir um dado no computador
	cout << "Digite um numero decimal: ";
	cin >> decimal1;
	

	return 0;
}
