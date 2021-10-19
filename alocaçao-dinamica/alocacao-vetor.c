#include <stdio.h>
#include <stdlib.h>

int main()
{
    //vetor armazena somente o endereço do primeiro indice do vetor
    int *vet2;
    //    casting       tamvet  tam * tipo
    vet2 = (int *)calloc(4, sizeof(int));
    int *p2 = vet2;
    //printf("i = %u \n", &i);
    printf("vet2 = %u \n", vet2);
    printf("p2 = %u \n", p2);

    vet2[0] = 50;
    *(vet2 + 1) = 60;
    p2[2] = 70;
    *(p2 + 3) = 80;

    free(vet2);
    vet2 = p2 = NULL;
    
    return 0;
}