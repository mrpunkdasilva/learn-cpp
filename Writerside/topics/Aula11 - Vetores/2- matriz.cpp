#include <iostream>
using namespace std;
/*
	*= Matriz ou Array Bidimensional =*
  ! Matriz É um array que contém arrays, seria um vetor que contém outros vetores - por isso bidimensional

  	* Pra criar uma matriz é assim:
		tipo matriz[L][C];
	! [L] é o numero de linhas
    ! [C] é o numero de colunas

  *Pense na Matriz como em uma tabela:
			   L  C
	int matriz[3][4];
				   0  1  2  3
	       ->	0 [ ][ ][ ][ ]
    Linhas ->	1 [ ][ ][ ][ ]
           ->	2 [ ][ ][ ][ ]
				   ^  ^  ^  ^
				   |  |	 |	|
			         Colunas
*/
int main(){
//  !		   L  C
	int matriz[3][4];
	int l,c;

/* 
	* Representação em tabela da Matriz abaixo:>>
	   0  1  2  3
  	0 [0][0][0][0]
    1 [1][1][1][1]
    2 [2][2][2][2]

	matriz[0][0] = 0;
	matriz[0][1] = 0;
	matriz[0][2] = 0;
	matriz[0][3] = 0;
	
	matriz[1][0] = 1;
	matriz[1][1] = 1;
	matriz[1][2] = 1;
	matriz[1][3] = 1;
	
	matriz[2][0] = 2;
	matriz[2][1] = 2;
	matriz[2][2] = 2;
	matriz[2][3] = 2;
*/

  // * Preenchimento de Matriz com aa rotina for:>>
  for(l=0; l<3; l++){
  	for(c=0; c<4; c++){
	  cout << "Digite o valor da linha " << l << " coluna " << c << " > ";
	  cin >> matriz[l][c];
	  cout << "\n";
  	}
  }

  // * For para percorrer uma Matriz:>>
  for(l=0; l<3; l++){
  	for(c=0; c<4; c++){
	  cout << "[" << matriz[l][c] << "]";
  	}
  	cout << "\n";
  }
	
	return 0;
}
