#include <stdio.h>
#include <stdlib.h>

int main()

{
    //vc insere um valor inicial e um final e a quantidade que deseja ir "pulando"
     int vi, vf, pulo, i;
    printf("Coloque o valor inicial: \n");
    scanf("%d", &vi);
    printf("Coloque o valor final: \n");
    scanf("%d", &vf);
    printf("Coloque os pulos: \n");
    scanf("%d",&pulo);

    for(i = vi; i <= vf; i = i + pulo) {
        printf("I %d\n", i);
    }

    //somador de numeros anteriores de 1 a 10
     int j, soma;
    soma = 0;
    printf("Bem-vindo a soma de numeros anteriores! \n");
    for(j = 0; j < 10; j++) {
        printf("\nValor J: %d", j);
        printf(" Soma: %d ", soma);
        soma += j;
    }

    //tabuada de 0 a 10 de qlqr numero
    int k, numero, tabuada;
    printf("\nEntre com o numero para multipl: ");
    scanf("%d", &numero);

    for(k = 0; k <= 10; k++) {
        tabuada = numero * k;
        printf("%d x %d: %d\n", numero, k, tabuada);
    }

    return 0;
}

