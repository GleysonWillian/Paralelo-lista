#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero entre 1000 e 2000: \n");
    scanf("%d", &num);

        printf("\nValor dos numeros correspondentes:");

    for (num = 1000; num <= 2000; num++)
    {
        if (num % 11 == 5)
        {
            printf("%d\n", num);
        }
    }

    return 0;
}