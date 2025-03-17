# Variáveis Globais, Locais e Operadores Aritméticos em C++

---

## Variáveis Globais e Locais

### Variáveis Globais
- São variáveis declaradas **fora de qualquer função**, geralmente no início do programa.
- Podem ser acessadas e modificadas por **qualquer parte do código**.
- Exemplo:
  ```cpp
  int n1, n2; // Variáveis globais
  ```

### Variáveis Locais
- São variáveis declaradas **dentro de uma função ou bloco de código**.
- Só podem ser acessadas e modificadas **dentro do escopo onde foram declaradas**.
- Exemplo:
  ```cpp
  int main() {
      int n3, n4; // Variáveis locais
  }
  ```

---

## Operadores Aritméticos

Os operadores aritméticos são usados para realizar cálculos matemáticos. Os principais operadores em C++ são:

| Operador | Descrição          | Exemplo |
|----------|--------------------|---------|
| `+`      | Soma               | `a + b` |
| `-`      | Subtração          | `a - b` |
| `*`      | Multiplicação      | `a * b` |
| `/`      | Divisão            | `a / b` |
| `%`      | Módulo (resto)     | `a % b` |

### Exemplo de Uso
```cpp
int res1 = n1 / n2; // Divisão
int res2 = n1 % n2; // Resto da divisão
```

---

## Ordem de Precedência

A ordem de precedência define a prioridade com que os operadores são avaliados em uma expressão. A ordem é a seguinte:

1. **Parênteses `()`**: Expressões dentro de parênteses são avaliadas primeiro.
2. **Módulo `%`**: Operador de resto da divisão.
3. **Multiplicação `*` e Divisão `/`**: Têm a mesma prioridade e são avaliados da esquerda para a direita.
4. **Adição `+` e Subtração `-`**: Têm a mesma prioridade e são avaliados da esquerda para a direita.

### Exemplo de Precedência
```cpp
int resultado = (n1 + n2) * n3 / n4;
```
- Primeiro, a soma dentro dos parênteses é calculada.
- Em seguida, o resultado é multiplicado por `n3`.
- Por fim, o resultado é dividido por `n4`.

---

## Exemplo Completo

```cpp
#include <iostream> // Biblioteca para entrada e saída
using namespace std; // Usa o namespace padrão

// Variáveis globais
int n1, n2;

int main() {
    // Variáveis locais
    int n3, n4;
    int res1, res2;

    // Atribuição de valores
    n1 = 1;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    // Operações aritméticas
    res1 = n1 / n2; // Divisão
    res2 = n1 % n2; // Resto da divisão

    // Saída de dados
    cout << "\nDivis: " << res1 << "\n\n";
    cout << "\nResto: " << res2 << "\n\n";

    return 0; // Indica que o programa foi executado com sucesso
}
```

---

## Observações

- **Variáveis Globais**: Úteis para compartilhar dados entre funções, mas devem ser usadas com cuidado para evitar conflitos.
- **Variáveis Locais**: Limitadas ao escopo onde foram declaradas, o que ajuda a evitar erros e conflitos.
- **Operadores Aritméticos**: Permitem realizar cálculos matemáticos básicos.
- **Ordem de Precedência**: Define a prioridade dos operadores em expressões complexas. Use parênteses para garantir a ordem desejada.
