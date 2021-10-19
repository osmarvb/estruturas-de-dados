#include <stdio.h>
#include <stdlib.h>

// Devolve a soma dos valores do vetor

int somaVetor(int *vetor, int tam)
{
    int i, soma = 0;
    ;
    for (i = 0; i < tam; i++)
    {
        soma += vetor[i];
    }
    return soma;
}

int main()
{
    //alocaçao estatica
    int vet1[4] = {10, 20, 30, 40};
    // Alocaçao dinamica
    int *vet2 = (int *)calloc(4, sizeof(int));
    vet2[0] = 50;
    vet2[1] = 60;
    vet2[2] = 70;
    vet2[3] = 80;
    //                nome vet, tam vet
    int soma1 = somaVetor(vet1, 4);
    int soma2 = somaVetor(vet2, 4);

    printf("soma1 = %u \n", soma1);
    printf("soma2 = %u \n", soma2);

    return 0;
}