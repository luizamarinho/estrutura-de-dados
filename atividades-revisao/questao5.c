// Crie um vetor de n inteiros alocados dinamicamente.
// Utilize a função rand() para preencher o vetor.  Apresente a soma de seus elementos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;

    printf("Insira a quantidade desejada\n");
    scanf("%d", &quantidade);

    int *vetor = (int *)malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++)
    {
        vetor[i] = rand() % 100;
    }

    for (int i = 0; i < quantidade; i++)
    {
        printf("Valor do elemento %d: %d\n", i + 1, vetor[i]);
    }
}