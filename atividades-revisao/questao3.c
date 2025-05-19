// Utilizando alocação dinâmica, crie duas variáveis inteiras e uma variável do tipo float.
// Peça que o usuário informe um dividendo e um divisor. Divida os números informados,
// salvando o resultado na variável float.
// Imprima o resultado da divisão.
#include <stdio.h>
#include <stdlib.h>

// O malloc gera um endereço de memória (que pode estar em qualquer lugar da memória).
// Depois o endereço de memória gerado é guardado dentro de uma gaveta (do tipo ponteiro: guarda endereços)

int main()
{
    // int a;
    // int *dividendo = &a

    int *dividendo = (int *)malloc(sizeof(int));
    int *divisor = (int *)malloc(sizeof(int));
    float *resultado = (float *)malloc(sizeof(float));

    printf("Insira o dividendo\n");
    scanf("%d", dividendo);

    printf("Insira o divisor\n");
    scanf("%d", divisor);

    *resultado = *dividendo / *divisor;

    printf("O resultado eh %.1f\n", *resultado);
}
