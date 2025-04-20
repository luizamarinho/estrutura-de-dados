// Escreva um programa que tenha uma função chamada incrementa() que recebe um
// ponteiro para um inteiro e incrementa o valor da variável em 1. No programa principal, crie uma
// variável inteira, passe seu endereço para a função e imprima o valor antes e depois do incremento.

#include <stdio.h>

void incrementa(int *num1)
{
    *num1 += 1;
};

int main()
{
    int var1 = 20;
    int var2 = 30;

    printf("Valor da variavel antes da troca: %d \n", var1);

    incrementa(&var1);

    printf("Valor da variavel depois da troca: %d \n", var1);
}