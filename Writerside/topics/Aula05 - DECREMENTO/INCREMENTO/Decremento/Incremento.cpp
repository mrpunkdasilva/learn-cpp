#include <iostream>
using namespace std;
/*   
		*Incremendo*
  	 n1 = n1 + 1; Forma normal completa de incremetar, vai pegar o valor de n1 e somar com mais 1

	 n1 =+ 9; Forma mais inchuda de incremendar, funciona da mesma forma

	 n1++; Essa é a forma mais contraida (inchuda) de incremendar

        *Decremendo - o mesmo que o incremedo só muda o sinal*
 	 n1 = n1 - 1; Forma normal completa de incremetar, vai pegar o valor de n1 e somar com mais 1

	 n1 -= 9; Forma mais inchuda de incremendar, funciona da mesma forma

	 n1--; Essa é a forma mais contraida (inchuda) de incremendar
	 	! Lembrando as formas são diferentes mas vai resultar na mesma coisa 
		! porem n1++; só vai diminuir ou aumentar em 1 unidade(ou seja de 1 em 1)  

	  # Outras formas de usar o incremento:

       n1 *= 12; [ aqui vai multiplicar por ele mesmo e por 12 ]
	   n1 /= 5; [ aqui vai dividir por ele mesmo e por 12 ]
	   n1 %= 7; [ aqui vai fazer o mod dele mesmo por 12 ]
	   
	  	- Diferença entre pre e pos incremento/decremento:
	  Pos incremento/decremento - Primeiro ela usa o valor da variavel em seguida incrementa/decrementa
	  	! ex:=  int n1++;
	  Pre incremento/decremento - Primeiro incrementa/decrementa a variavel em seguida usa o valor dela
	  	! ex:=  int ++n1;
*/
int main(){
	int n1;
	
	n1 = 10;

	cout << n1++ << "\n\n"; //Pos-incremento
	cout << ++n1 << "\n\n"; //Pre-incremento

	return 0;
}

