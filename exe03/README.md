# Exercício - Função - Menor e Maior número

Desenvolva uma função que retorne o menor e o maior número presente em um vetor.

## Especificação

Sua função deve receber um vetor números inteiros e a quantidade de elementos do vetor como parâmetro e retornar dois número inteiros. O retorno deve ser por referência, uma vez que a função só pode retornar um valor, seguindo o protótipo:

```c
void menor_maior(int v[], int n, int *menor, int *maior);
```

As definições dos métodos devem ficar no arquivo `functions.h` e as implementações no arquivo `functions.c`.

## Testes

Os casos de testes devem seguir as definições para as estradas e saídas esperadas.

### Entrada

A entrada padrão deve receber um valor $n$ com a quantidade de elementos a serem armazenados no vetor, seguido de $n$ números inteiros.

```
5
6
13
2
9
7
```

### Saída

A saída padrão deve deve imprmir o menor e o maior valor presente no vetor.

```
MENOR = 2
MAIOR = 13
```