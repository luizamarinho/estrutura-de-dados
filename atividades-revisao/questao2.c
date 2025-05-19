// Aloque dinamicamente um vetor cujo tamanho é definido pelo usuário e permita que ele preencha
// os valores.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho;

    printf("Insira o tamanho desejado\n");
    scanf("%d", &tamanho);

    int *vetor = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        printf("Insira o valor\n");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Valor do elemento %d: %d\n", (i + 1), *(vetor + i));
    }
}