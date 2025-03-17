# Constantes e Declaração Múltipla de Variáveis em C++

---

## Constantes

Constantes são valores que não podem ser alterados durante a execução do programa. Diferente de variáveis, que podem ter seus valores modificados, as constantes permanecem com o mesmo valor definido inicialmente.

### Como Definir Constantes

Em C++, uma constante pode ser definida usando o comando `#define`. A sintaxe é a seguinte:

```cpp
#define NOME_DA_CONSTANTE valor
```

- O `#` (jogo da velha) indica que é uma diretiva de pré-processador.
- O valor da constante pode ser um número, texto ou até mesmo um comando.

### Exemplos de Constantes

1. **Constante com valor de texto**:
   ```cpp
   #define nome "Gustavo Shoter"
   ```

2. **Constante com comando**:
   ```cpp
   #define cumprimento cout << "Hello World \n";
   ```

   Neste caso, a constante `cumprimento` contém um comando `cout` que será executado sempre que a constante for chamada.

### Uso de Constantes no Programa

Para usar uma constante, basta chamá-la pelo nome no código. Exemplo:

```cpp
cout << "\n" << nome << "\n"; // Exibe o valor da constante "nome"
cumprimento; // Executa o comando armazenado na constante "cumprimento"
```

---

## Declaração Múltipla de Variáveis

Em C++, é possível declarar várias variáveis do mesmo tipo em uma única linha. Isso torna o código mais compacto e organizado.

### Regras para Declaração Múltipla

1. Todas as variáveis devem ser do **mesmo tipo**.
2. Separe os nomes das variáveis com **vírgulas**.

### Sintaxe

```cpp
TIPO nome1, nome2, nome3;
```

Isso é equivalente a:

```cpp
TIPO nome1;
TIPO nome2;
TIPO nome3;
```

### Exemplo de Declaração Múltipla

```cpp
int vidas, tiros, balas;
```

### Inicialização Múltipla

Você também pode declarar e inicializar várias variáveis na mesma linha:

```cpp
int nota1 = 6, nota2 = 6, media = 6;
```

Isso é equivalente a:

```cpp
int nota1 = 6;
int nota2 = 6;
int media = 6;
```

---

## Exemplo Completo

```cpp
#include <iostream> // Biblioteca para entrada e saída
using namespace std; // Usa o namespace padrão

// Definição de constantes
#define nome "Gustavo Shoter"
#define cumprimento cout << "Hello World \n";

int main() {
    // Declaração múltipla de variáveis
    int vidas, tiros, balas;

    // Declaração e inicialização múltipla de variáveis
    int nota1 = 6, nota2 = 6, media = 6;

    // Uso de constantes
    cout << "\n" << nome << "\n"; // Exibe o valor da constante "nome"
    cumprimento; // Executa o comando armazenado na constante "cumprimento"

    return 0; // Indica que o programa foi executado com sucesso
}
```

---

## Observações

- **Constantes**: Use `#define` para valores que não mudam durante a execução do programa.
- **Declaração Múltipla**: Útil para reduzir a repetição de código ao declarar variáveis do mesmo tipo.
- **Inicialização Múltipla**: Permite declarar e atribuir valores a várias variáveis em uma única linha.
