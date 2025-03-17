#include <iostream>]
/*
	* Importa a biblioteca stdlib, usada para acessar comandos do system (sistema DOS)
		#>> Usa-se  função:
			system(<string>) |> executa um comando de lote passado como argumento
*/
#include <stdlib.h>

using namespace std;

int main() {
	
	system("dir");
	system("color 05");
	cout << "Hallow" << endl;
	system("pause");
	
	return 0;
}


