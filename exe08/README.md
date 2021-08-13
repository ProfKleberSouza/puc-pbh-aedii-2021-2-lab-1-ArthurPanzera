# Exercício - Função recursiva - Palíndromo

Desenvolva uma função recursiva que verifique se uma palavra é palíndromo, Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante (Ex. aba, abcba, xyzzyx).

## Especificação

Sua função deve receber uma string e retornar `true` ou `false`, seguindo o protótipo:

```c
bool is_palindromo(char texto[]);
```

As definições dos métodos devem ficar no arquivo `functions.h` e as implementações no arquivo `functions.c`.

## Testes

Os casos de testes devem seguir as definições para as estradas e saídas esperadas.

### Entrada

A entrada padrão deve receber uma string.

```
abcba
```

### Saída

Imprima a mensagem "SIM" se a string for um palíndromo ou "NAO", caso contrário. 

```
SIM
```