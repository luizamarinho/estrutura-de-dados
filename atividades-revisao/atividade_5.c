#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;

    printf("Escolha o tipo de dado do vetor:\n");
    printf("1 - int\n");
    printf("2 - float\n");
    printf("3 - char\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        int *vetor = (int *)malloc(10 * sizeof(int));

        printf("Digite 10 valores inteiros:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("Posição %d: ", i);
            scanf("%d", &vetor[i]);
        }

        printf("Valores informados:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
    else if (opcao == 2)
    {
        float *vetor = (float *)malloc(10 * sizeof(float));

        printf("Digite 10 valores reais (float):\n");
        for (int i = 0; i < 10; i++)
        {
            printf("Posição %d: ", i);
            scanf("%f", &vetor[i]);
        }

        printf("Valores informados:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    }
    else if (opcao == 3)
    {
        char *vetor = (char *)malloc(10 * sizeof(char));

        printf("Digite 10 caracteres:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("Posição %d: ", i);
            while ((getchar()) != '\n')
                ;
            scanf("%c", &vetor[i]);
        }

        printf("Valores informados:\n");
        for (int i = 0; i < 10; i++)
        {
            printf("%c ", vetor[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Opção inválida.\n");
    }

    return 0;
}