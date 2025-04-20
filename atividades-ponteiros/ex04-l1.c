// Crie um programa que declare um ponteiro para um ponteiro (int **pptr). Faça com
// que o ponteiro para ponteiro aponte para um ponteiro que, por sua vez, aponta para uma variável inteira.
// Altere o valor dessa variável usando o ponteiro para ponteiro e imprima o resultado.

#include <stdio.h>

int main()
{

    int a = 100;
    int *b = &a;  // int* b (o tipo é um ponteiro de inteiro)
    int **c = &b; // int** c (o tipo é um ponteiro de um ponteiro de inteiro)

    **c = -100;

    printf("%d\n", a);
}