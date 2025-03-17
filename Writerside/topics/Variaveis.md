# Variáveis em C++

Variáveis são espaços na memória do computador reservados para armazenar dados. Em C++, é necessário declarar o tipo de dado que a variável irá armazenar, além de, opcionalmente, atribuir um valor inicial a ela.

---

## Tipos de Variáveis

Em C++, os tipos de variáveis são divididos em três categorias principais:

### 1. Tipos Numéricos
- **`int`**: Armazena números inteiros (positivos ou negativos).  
  Exemplo: `3`, `-4`, `100`.
- **`double`**: Armazena números decimais com alta precisão (muitas casas decimais).  
  Exemplo: `2.333333`, `3.14159`.
- **`float`**: Armazena números decimais, mas com menos precisão que `double`.  
  Exemplo: `2.939`, `9.5`.

### 2. Tipos de Caractere
- **`char`**: Armazena um único caractere. Deve ser colocado entre apóstrofos (`' '`).  
  Exemplo: `'A'`, `'z'`, `'$'`.
- **`string`**: Armazena uma cadeia de caracteres (texto). Deve ser colocado entre aspas (`" "`).  
  Exemplo: `"Hello World"`, `"C++ é legal!"`.

### 3. Tipo Lógico
- **`bool`**: Armazena valores booleanos, que podem ser `true` (verdadeiro) ou `false` (falso).  
  Exemplo: `true`, `false`.

---

## Declaração de Variáveis

Em C++, existem duas formas de declarar variáveis:

### 1. Declaração sem Inicialização
```cpp
TIPO NOME;
```
- A variável é criada, mas não recebe um valor inicial.
- Se for um tipo numérico, o valor padrão é `0`.
- Se for uma `string`, o valor padrão é uma string vazia (`""`).

Exemplo:
```cpp
int numero;
double decimal;
char letra;
```

### 2. Declaração com Inicialização
```cpp
TIPO NOME = VALOR;
```
- A variável é criada e já recebe um valor inicial.

Exemplo:
```cpp
int idade = 25;
double pi = 3.14159;
bool isActive = true;
string nome = "João";
```

---

## Entrada e Saída de Dados com Variáveis

### Saída de Dados (`cout`)
- O comando `cout` é usado para exibir dados na tela.
- Exemplo:
  ```cpp
  cout << "Olá, mundo!";
  ```

### Entrada de Dados (`cin`)
- O comando `cin` é usado para receber dados do usuário e armazená-los em uma variável.
- Exemplo:
  ```cpp
  int numero;
  cout << "Digite um número: ";
  cin >> numero;
  ```

---

## Exemplo Completo

```cpp
#include <iostream> // Biblioteca para entrada e saída
using namespace std; // Usa o namespace padrão

int main() {
    // Declaração de variáveis
    int idade;
    double altura;
    char inicial;
    bool isEstudante;
    string nome;

    // Atribuição de valores
    idade = 20;
    altura = 1.75;
    inicial = 'J';
    isEstudante = true;
    nome = "João Silva";

    // Entrada de dados
    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite sua altura: ";
    cin >> altura;

    // Saída de dados
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Altura: " << altura << " metros" << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "É estudante? " << (isEstudante ? "Sim" : "Não") << endl;

    return 0; // Indica que o programa foi executado com sucesso
}
```

---

## Observações
- Todo comando em C++ deve ser finalizado com `;`.
- Variáveis não inicializadas podem conter valores "lixo" (dados aleatórios da memória).
- Use nomes descritivos para variáveis para melhorar a legibilidade do código.

