// Aloque um vetor de 10 inteiros e preencha-o com os quadrados dos índices (0, 1, 4, 9, …).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        vetor[i] = i * i;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", vetor[i]);
    }
}