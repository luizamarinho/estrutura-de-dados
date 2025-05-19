#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 4, colunas = 4;
    int **matriz;

    matriz = (int **)malloc(linhas * sizeof(int *));
    if (matriz == NULL)
    {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro ao alocar memória para a linha %d.\n", i);
            return 1;
        }
    }

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            soma += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}
