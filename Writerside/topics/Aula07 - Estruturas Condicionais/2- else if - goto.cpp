#include <iostream>
#include <cstdlib>
using namespace std;

/*
  * Comando: else if()
  	! Esse comando funciona como o elif, seria um caso contrario, caso não for
  
  Sintaee:
  if(){
	bloco se
  }else if(){
	bloco se senão/caso contrario
  }else{
	bloco senão
  }
*/

/*
  * Comamdo goto -> esse comando vai servir como um loop, funciona assim:
	=> Quando achar um label (seria como uma seta, uma marcação) ele irá repetir o codigo apartir do label
  o label não é lido
  * Para, criar um label faz assim:
		nome_label: //usase o ":" para indicar que ali é um label e que apartir dali vai ativar o goto
*/

int main(){
	float n1, n2, res;
	char opc;
	
	inicio:

	system("cls"); //Comando para limpar tela - necessario a lib -> <cstdlib>
		
	cout << "Digite a primeira nota> ";
	cin >> n1;
	cout << "Digite o valor da segunda nota> ";
	cin >> n2;
	
	res = (n1 + n2)/2;

	if(res >= 7){
		cout << "\n\n-= Aprovado\n";
		cout << "-= Nota final: " << res;
	}else if(res > 5 and res < 7){
		cout << "\n\n-= Reforco fih de uma egua\n";
		cout << "-= Nota final: " << res;
	}else{
		cout << "\n\n-= Reprovado seu retardado\n";
		cout << "-= Nota final: " << res;
	}
	
	cout << "\nDigitar outras notas? [s/n] ";
	cin >> opc;
	
	if(opc == 's' or opc == 'S'){
		goto inicio;
	}else{
		cout << "\nPrograma finalizado!";
	}
	
	return 0;
}

