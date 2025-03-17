#include <iostream>
#include <stdlib.h>

using namespace std;

/*
	* POO - Classes *
	#> Para criar as classes em C++ deve se usar:
	? usa a palavra reservada class em seguida atribui um nome a classe;
		class nameClass {
			// code...
		};
	? Por uma questão de sintaxe o C++ divide elementos entre "public" e "private"
	¬ ou seja publico ou privado
	
	* Metodos
	? Para usar metodos deve prototipar em public ou private
	? Depois constriuir o metodo fora da classe
*/
class Aviao {
	// área dos elementos publicos
	public:
		int vel = 0;
		int velMax;
		string tipo;
		void ini(int tp);
	
	// área dos elementos privados
	private:
	
};

/* Construção de um metodo
? Os '::' são obrigadorios e são questão de sintaxe
type class::method(<args>)*/
void Aviao::ini(int tp) {
	// [1] - Jato | [2] - Monomotor | [3] - Planador
	if (tp == 1) {
		//? this |> "para essa classe" eh exatamente o que o this significa
		//¬ servindo como um 'identificador'
		this->velMax = 800;
		this->tipo = "Jato";
	} else if (tp == 2) {
		this->velMax = 300;
		this->tipo = "Monomotor";
	} else if (tp == 3) {
		this->velMax = 180;
		this->tipo = "Planador";
	}
}


int main(){
	//* Instanciar - sintaxe
	//! Regrinha do C++ para instanciar: 
		//¬ o objeto que vai receber a class deve estar como ponteiro
	Aviao *av1 = new Aviao();
	Aviao *av2 = new Aviao();
	Aviao *av3 = new Aviao();
	
	//* Usar Atributos
	cout << "Velociade: " << av1->vel << endl;
	
	//* Usar Metodos
	av1->ini(1);
	av2->ini(2);
	av3->ini(3);
	
	cout << "Tipo: " << av1->tipo << "| Velocidade: " << av1->velMax << endl;
	cout << "Tipo: " << av2->tipo << "| Velocidade: " << av2->velMax << endl;
	cout << "Tipo: " << av3->tipo << "| Velocidade: " << av3->velMax << endl;
		
	return 0;
}

