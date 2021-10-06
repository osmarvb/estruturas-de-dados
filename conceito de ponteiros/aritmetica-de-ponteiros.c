#include <stdio.h>

int main(){

    int *p;
    int i  = 10;
    
    p = &i;
    p = p + 1;

    printf("i = %u \n", &i);
    printf("p = %u \n", p);
    
    return 0;
} 