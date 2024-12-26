#include <stdio.h>

int main () {

    int matriz [3] [3], i, j;

    printf("Digite valor para os elementos da matriz: \n\n");

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
    { 
        printf ("\nElemento [%d] [%d] = ", i, j);
        scanf ("%d", &matriz [i] [j]);
    }

    printf ("\n\nSaida de dados:\n");

    for (i=0; i<3; i++)
        for (j=0; j<3; j++)
    {
        printf ("\nElemento [%d] [%d] = %d\n", i, j, matriz [i] [j]);
    }

    return 0;
}