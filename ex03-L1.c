// Escreva um programa que defina uma função chamada troca() que recebe dois
// ponteiros como argumentos. A função deve trocar os valores das duas variáveis apontadas pelos
// ponteiros. No programa principal, crie duas variáveis inteiras, chame a função troca() e imprima os
//  valores antes e depois da troca.

#include <stdio.h>

void troca(int *num1, int *num2)
{
    *num1 = -20;
    *num2 = -30;
};

int main()
{
    int var1 = 20;
    int var2 = 30;

    printf("Valor da variavel 1 antes da troca: %d \n", var1);
    printf("Valor da variavel 2 antes da troca: %d \n", var2);

    troca(&var1, &var2);

    printf("Valor da variavel 1 depois da troca: %d \n", var1);
    printf("Valor da variavel 2 depois da troca: %d \n", var2);
}