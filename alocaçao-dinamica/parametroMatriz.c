#include <stdio.h>
#include <stdlib.h>

// imprime os valores da matriz estatica
int imprimeEST(int *m, int lin, int col)
{
    int i, j;
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("\t%d", m[i * col + j]);
        }
        printf("\n");
    }
}

// imprime os valores da matriz dinamica
int imprimeDIN(int** m, int lin, int col){
  int i,j;
  for(i=0; i<lin; i++){
    for(j=0; j<col; j++){
      printf("\t%d", m[i][j]);
    }
    printf("\n");
 }
}

int main()
{
    int m1[2][3];

    int **m2 = (int **)calloc(2, sizeof(int *));
    m2[0] = (int *)calloc(3, sizeof(int));
    m2[1] = (int *)calloc(3, sizeof(int));

    imprimeEst((int *)m1, 2, 3);
    imprimeDin(m2, 2, 3);

    return 0;
}