#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
typedef struct produto{
    unsigned int codigo;
    char nome[50];
    float preco;
}Produto;




// utilize a função imprimir auxiliar no teste das outras funções.
void imprimirVetor(int *v, int tam)
{
    int i;
    printf("[");
    for (i = 0; i < tam; i++)
    {
        printf("%d", v[i]);
        if (i < tam - 1)
            printf(",");
    }
    printf("]");
    printf("\n");
}

// exercício 01
// Escreva uma função para criar vetores de inteiros com diferentes tamanhos. A função deve ser capaz de criar o vetor e preenche-lo com um valor específico.

// O nome da função deve ser **`criarVetor`**.

// **Entrada:**

// - tamanho do vetor
// - valor utilizado para o preenchimento do vetor

// **Saída:**

// - Endereço (heap) da memória onde o vetor foi criado.
int *criaVetor(int tam, int valor)
{
    int *vetor = (int *)calloc(tam, sizeof(int));
    for (int i = 0; i < tam; i++)
    {
        vetor[i] = valor;
        //printf(" %d",vetor[i]);
    }
    return vetor;
}

// exercício 02
// Escreva uma função para duplicar vetores de inteiro. A função deve ser capaz de replicar o conteúdo do vetor em outra região de memória.

// O nome da função deve ser `clonarVetor`.

// **Entrada:**

// - endereço de memória do vetor original
// - tamanho do vetor original

// **Saída:**

// - Endereço (heap) da memória da cópia do vetor original.
int *clonarVetor(int *vet, int tam)
{
    int *clonevetor = (int *)calloc(tam, sizeof(int));

    for (int i = 0; i < tam; i++)
    {
        clonevetor[i] = vet[i];
    }
    return clonevetor;
}

// exercício 03
// Escreva uma função para criar um vetor de inteiros preenchido com valores aleatórios. A função deve ser capaz de criar vetores de diferentes tamanhos.

// O nome da função deve ser `criarVetorAleatorio`.

// **Entrada:**

// - tamanho do vetor
// - valor utilizado para o preenchimento do vetor

// **Saída:**

// - Endereço (heap) da memória onde o vetor foi criado.
int *criarVetorAleatorio(int tam)
{
    int *aleatVet = (int *)calloc(tam, sizeof(int));
    for (int i = 0; i < tam; i++)
    {
        aleatVet[i] = rand() % 1000;
    }

    return aleatVet;
}

// exercício 04
// Escreva uma função incrementar 1 ao valor de cada elemento do vetor. A função deve percorrer todos os elementos e incrementar o valor.

// O nome da função deve ser `incrementaVetor`.

// **Entrada:**

// - endereço de memória do vetor
// - tamanho do vetor

// **Saída:**

// - não tem saída (void)

int* incrementaVetor(int *endereco, int tam){
    int *v = (int *)calloc(tam, sizeof(int));
    v = endereco;
    for (int i = 0; i < tam; i++)
    {   
        v[i]= *(endereco+i)+1;
    }
    return v;
}


// exercício 05
// Escreva uma função que seja capaz de dobrar o tamanho de um vetor. A função deve preservar os valores do vetor e preencher com zero as posições adicionais e devolver o endereço

// Passos para o desenvolvimento da função:

// 1. Alocar um novo vetor com o dobro do tamanho do vetor recebido por parâmetro.

// 2. Copiar os valores para o vetor novo

// 3. Preencher com '0' as novas posições

// 4. Desalocar o vetor antigo

// 5. Atualizar a referência do vetor recebido por parâmetro

// O nome da função deve ser `dobrar`. A função somente funciona para vetores alocados dinamicamente.

// **Entrada:**

// - endereço de memória do vetor
// - tamanho do vetor

// **Saída:**

// - não tem saída (void)

int dobrar(int **v, int tam){

	int *Vetdobrado = (int *)calloc(tam*2, sizeof(int));
	for (int i = 0; i < tam*2; i++)
    {
		*(Vetdobrado+i)=*(*v+i);
    }
	printf("[");
for (int i = 0; i < tam*2; i++)    
       printf("%d,", i);

	   printf("]\n");
return 1;

}

// exercício 06
// Considere o registro definido abaixo

// ```c

// ```

// a) Crie uma função responsável por criar dinamicamente um produto e inicializar seus valores. Os valores devem ser recebidos como parâmetro.

// b) Crie uma função responsável por imprimir um produto. A função deve imprimir os valores de todos os atributos do produto.

// c) Escreva exemplos de utilização das funções criadas nos itens 'a' e 'b'


Produto* produtoCriar(unsigned int codigo, char* nome, float preco){
    Produto* p = (Produto*) malloc(sizeof(Produto));
    p->codigo = codigo;
    strcpy(p->nome, nome);
    p->preco = preco;   
    return p;
}
void produtoImprimir(Produto* prod){

      //  Produto* p = prod;
                       
        printf("[ra]     %d\n", prod->codigo);
        printf("[nome]   %s\n", prod->nome);
        printf("[nota 0] %.2f\n", prod->preco);
}

// exercício 07
// Escreva uma função para criar uma matriz dinamicamente e preenche-la com um valor específico. A função deve ser capaz de criar uma matriz de qualquer tamanho e preenche-la com qualquer valor.

// O nome da função deve ser `criarMatriz`.

// **Entrada:**

// - quantidade de linhas
// - quantidade de colunas
// - valor a ser utilizado no preenchimento da matriz

// **Saída:**

// - Endereço (heap) da memória da matriz criada.
int** cria_matriz(int linhas, int colunas, int valor){
	
 
	int **m = malloc(linhas * sizeof(int ));
	for (int i = 0; i < linhas; i++)
	m[i] = malloc(colunas * sizeof(int));
	
	for (int i = 0; i < linhas; i++){
		
		for (int j = 0; j < colunas; j++)
			m[i][j]=valor;
	}
  return m;
}
int main()
{
    // faça o teste de todas as funções desenvolvidas.

    int *v1, *v2, *v3, *v5;
    int *v;
    unsigned int codigo = 1;
    char nome[50]= "treewq";
    float preco = 23.10;

    v1 = criaVetor(10, -2);
    imprimirVetor(v1, 10);

    v2 = clonarVetor(v1, 10);
    imprimirVetor(v2, 10);

    v3 = criarVetorAleatorio(10);
    imprimirVetor(v3, 10);

    dobrar(&v3, 10);   

    //v5 = incrementaVetor(v1, 10);
    //imprimirVetor(v5, 10);

    cria_matriz(3,4,8);
    
    Produto *e = produtoCriar(codigo, nome, preco);
    produtoImprimir(e);

    return 0;
}
