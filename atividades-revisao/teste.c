#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *teste = (int *)malloc(sizeof(int));

    printf("%d\n", *teste);
}