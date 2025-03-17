# Estrutura Básica de um Programa em C++


<warning>

Em C++, todo comando deve ser finalizado com `;`.

</warning>


## Inclusão de Bibliotecas

```cpp
#include <iostream>
```

- **`#include <iostream>`**: Esta é a biblioteca básica do C++. Ela é responsável pelas operações de entrada e saída de dados. Sem ela, o programa não funcionará corretamente.

## Namespace

```cpp
using namespace std;
```

- **`using namespace std;`**: Serve para indicar o espaço de trabalho padrão. Isso permite que você use funções e objetos da biblioteca padrão sem precisar prefixá-los com `std::`.

## Função Principal

```cpp
int main() {
    // Corpo do programa
}
```

- **`int main()`**: Esta é a função principal do programa. Em C++, toda função gera um retorno. No caso de `main()`, ela retorna um número inteiro (`int`), que geralmente é `0` para indicar sucesso ou `1` para indicar erro.

## Corpo do Programa

```cpp
cout << "HELLO WORLD\nCurso de C++";
```

- **`cout << "HELLO WORLD\nCurso de C++";`**: Este comando imprime o texto na tela. O comando `\n` é usado para pular uma linha após o texto anterior.

```cpp
system("pause");
```

- **`system("pause");`**: Este comando pausa a execução do programa, aguardando que o usuário pressione uma tecla para continuar.

```cpp
return 0;
```

- **`return 0;`**: Indica que o programa foi executado com sucesso. O valor `0` é retornado para o sistema operacional.

## Exemplo Completo

```cpp
#include <iostream> // Biblioteca básica de entrada e saída
using namespace std; // Espaço de trabalho padrão

int main() {
    cout << "HELLO WORLD\nCurso de C++"; // Imprime texto na tela
    system("pause"); // Pausa a execução
    return 0; // Retorna 0 indicando sucesso
}
```
