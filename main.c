#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n, i;
    int *x;
    n=10;
    //gerando números aleatórios (entre 10 e 30)
    srand(time(0));
    printf("%d ", 10+rand()%21);
    //alocando o endereço de memória
    x = (int*)malloc(n*sizeof(int));
    //testa a alocação
    if(x == 0){
        printf("não foi possível alocar");
        exit(0);
    }
    for (i=0; i<n; i++){
        x[i] = i+1;
    }
    free(x);
    return 0;
}

