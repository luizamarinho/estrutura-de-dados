// Aloque dinamicamente um float, atribua um valor e imprima.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *numero = (float *)malloc(sizeof(float));

    *numero = 50.5;

    printf("%.2f\n", *numero);
}
