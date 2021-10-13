#include <stdio.h>
#include <stdlib.h>

int main(){

    int i  = 1;
    int *p1 = &i;
    int *p2;
    //    casting        tam * tipo
    p2 = (int*) malloc (sizeof(int));
    *p2 = 5;
    printf("i = %u \n", &i);
    printf("p1 = %u \n", p1);
    printf("p2 = %u \n", p2);
    
    free(p2); //marca o endereço como livre
    p2 = NULL;
    printf("free p2 = %u \n", p2);

    return 0;
} 