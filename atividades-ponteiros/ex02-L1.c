// Escreva um programa que declare um array de 5 inteiros. Use um ponteiro para percorrer
// o array e atribuir valores 1, 2, 3, 4 e 5 a cada elemento. Em seguida, use o ponteiro para imprimir os
// valores do array.

#include <stdio.h>

int main()
{
    int array[5]; // a array em C é um ponteiro que aponta pro primeiro elemento e aloca o espaço de memória da quantidade definida
    int *p = array;

    for (int i = 0; i < 5; i++)
    {
        *(p + i) = i + 1; // p[i] = i + 1;
        printf("array[%d] = %d\n", i, *(p + i));
    }
}