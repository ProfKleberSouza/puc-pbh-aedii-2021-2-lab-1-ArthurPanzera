# Exercício - Função Recursiva - MDC

Crie uma função recursiva que calcule o MDC. Para calcular o valor siga as seguintes definições recursivas:

 - mdc(x, y) = y, se x >= y e x mod y = 0
 - mdc(x, y) = mdc(y, x), se x < y
 - mdc(x, y) = mdc(y, x mod y), caso contrário

## Especificação

Sua função deve receber dois números inteiros como parâmetro e retornar um número inteiro, seguindo o protótipo:

```c
int mdc(int x, int y);
```

As definições dos métodos devem ficar no arquivo `functions.h` e as implementações no arquivo `functions.c`.

## Testes

Os casos de testes devem seguir as definições para as estradas e saídas esperadas.

### Entrada

A entrada padrão deve receber dois números inteiros.

```
18 60
```

### Saída

Imprima o MDC.

```
MDC = 6
```