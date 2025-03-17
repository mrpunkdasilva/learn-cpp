#include <iostream>
using namespace std;

/* 
	*Switch - ele é parecido com o if, porém tem suas particularidades como: sintaxe e ele só serve para igauldades
  		!- Sintaxe
  
	switch(expressão){
		case constante 1:
			comandos;
			break;   
			! O break deve estar no fim de cada case, para que ele pare quando o caso for verdadeiro, se não ele não para
		case constante 2:
			comandos;
			break;
		default:   
		! O default será ativado caso nenhuma dos casos anteriores forem iguais ai executara seu bloco de comandos
			comandos;
			break;
	}
*/

int main(){

	int val;
	
	cout << "[1] = CARRO, [2] = MOTO, [3] = AVIAO, [4] HELICOPTERO]";
	cout << "\nSelecione um trasnporte> ";
	cin >> val;

	/* 
		* Essa é uma forma de switch
			switch(val){
				case 1:
					cout << "Cor selecionada: \n";
					break;
				case 2:
					cout << "Cor selecionada: Azul\n";
					break;
				case 3:
					cout <<"Cor selecionada: Vermelho\n";
					break;
				default:
					cout << "Valor Invalido";
			}
	----------------------------------------------------
		* Uma outra forma - seria um switch aninhado
			switch(val){
			case 1:
			case 2:
			case 3:
				cout <<"Cor selecionada: Verde\n";
				break;
			case 1:
			case 2:
			case 3:
				cout <<"Cor selecionada: Verde\n";
				break;
		}
	*/
	
		switch(val){
		case 1:
		case 2:
			cout << "Trasporte terrestre";
 		    switch(val){
 		    	case 1:
 		    		cout << "Carro selecionado\n";
 		    		break;
				case 2:
					cout << "Moto selecionada\n";
					break;
			 }
	        break;
   	    case 3:
		case 4:
 		    cout << "Trasporte Aereo";
 		    switch(val){
 		    	case 3:
 		    		cout << "Aviao selecionado\n";
 		    		break;
				case 4:
					cout << "Helicoptero selecionada\n";
					break;
			 }
	        break;
		default:
			cout << "Trasporte invalido";
	}
	
	cout << "Programa finalizado";

	return 0;
}

