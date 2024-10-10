#include <stdio.h>

int main()
{
    int i = 1;
    int num;
    float soma = 0.0;

    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        soma = soma + 1.0 / i;
    }

    printf("\nO valor  %.2f \n", soma);

    return 0;
}