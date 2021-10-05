#include <stdio.h>

int main(){

 short int i1 = 15;
 short int *p1;
 short int **w;
 p1 = &i1;
 w = &p1;

 printf("i1 = %d \n ", i1);
 printf("p1 = %d \n ", p1);
 printf("w = %d \n ", w);

    return 0;
}