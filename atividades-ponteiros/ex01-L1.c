// Crie um programa que declare duas variáveis inteiras (x e y). Atribua valores a essas
// variáveis e, em seguida, declare dois ponteiros para inteiros (p1 e p2). Faça com que os ponteiros
// apontem para x e y, respectivamente. Use os ponteiros para imprimir os valores das variáveis e
// também altere os valores de x e y através dos ponteiros.

#include <stdio.h>

int main()
{

    int x = 20;
    int y = 50;

    int *p1;
    int *p2;

    p1 = &x;
    p2 = &y;

    printf("Valor de x antes: %d\n", *p1);
    printf("Valor de y antes: %d\n", *p2);

    *p1 = -20;
    *p2 = -50;

    printf("Valor de x depois: %d\n", *p1);
    printf("Valor de y depois: %d\n", *p2);
}