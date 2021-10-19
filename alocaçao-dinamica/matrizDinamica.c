#include <stdio.h>
#include <stdlib.h>

int main()
{
    //alocaçao estatica
    int m1[2][3];

    m1[0][0] = 10;
    *(m1[1] + 2) = 60;

    // Alocaçao dinamica
    int **m2;
    // Primeira dimensão
    m2 = (int **)calloc(2, sizeof(int *));

    // Segunda dimensão
    m2[0] = (int *)calloc(3, sizeof(int));
    m2[1] = (int *)calloc(3, sizeof(int));

    m1[0][0] = 10;
    *(m1[1] + 2) = 60;

    free(m2[0]);
    free(m2[1]);

    free(m2);
    m2 = NULL

   // printf("soma1 = %u \n", soma1);
   // printf("soma2 = %u \n", soma2);

    return 0;
}