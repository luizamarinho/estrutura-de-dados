#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tamanho = (int *)malloc(sizeof(int));
    if (tamanho == NULL)
    {
        printf("Erro ao alocar memória para 'tamanho'.\n");
        return 1;
    }

    printf("Informe o tamanho do vetor: ");
    scanf("%d", tamanho);

    int *vetor = (int *)malloc((*tamanho) * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro ao alocar memória para o vetor.\n");
        return 1;
    }

    for (int i = 0; i < *tamanho; i++)
    {
        printf("Digite o valor para a posição %d: ", (i + 1));
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    for (int i = 1; i < *tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    printf("O maior valor informado no vetor foi: %d\n", maior);

    return 0;
}