#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, i, troca, soma;

    printf("Digite dois numeros: \n");
    scanf("%d", &X);
    scanf("%d", &Y);

    troca = 0;
    if (X > Y)
    {
        troca = X;
        X = Y;
        Y = troca;
    }

    soma = 0;
    for (int i = X + 1; i < Y; i++)
    {
        if (i % 2 != 0)
        {
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES = %d\n", soma);

    return 0;
}
