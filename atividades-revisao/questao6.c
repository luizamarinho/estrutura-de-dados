// Aloque dinamicamente um vetor cujo tamanho é definido pelo usuário e
// permita que ele preencha os valores.
// Depois, conte quantos números pares foram informados pelo usuário;

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    int pares = 0;

    printf("Insira a quantidade desejada\n");
    scanf("%d", &quantidade);

    int *vetor = (int *)malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++)
    {
        printf("Insira o valor para o elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            pares = pares + 1;
        }
    }

    printf("A quantidade de numeros pares eh: %d\n", pares);
}