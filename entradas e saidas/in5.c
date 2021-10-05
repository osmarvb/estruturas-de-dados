#include <stdio.h>


int main(){
 
   freopen("entrada.in", "r", stdin);
   freopen("saida.out", "w", stdout);

    int a, b;

    // ENTRADA
    scanf("%d %d", &a, &b);
    
    // PROCESSAMENTO
    int soma = a + b;
    
    // SAÍDA
    printf("%d\n", soma);

    return 0;
}