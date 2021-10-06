#include <stdio.h>

int main(){
  /**
   * 
  */
  short int v1[3] = {7,8,9};
  short int *p1;
  int v2[2] = {5,6};

    
    int *p2;
    p1 = v1;
    p2 = v2;
    printf("v1 = %d \n ", v1);
    printf("p1 = %d \n ", p1);
    printf("v2 = %d \n ", v2 );
    printf("p2 = %d \n ", p2 );

    return 0;
}