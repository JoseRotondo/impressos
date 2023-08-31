#include <stdio.h>

int main() {
    int contador,altura,linha,i;


        printf("Insira a altura da picture: ");
        scanf("%d", &altura);


    printf("\n");

    for (contador = altura; contador >= 1; contador--) {

        for (i = 1; i <= contador; i++) {
            printf("*");
        }
        printf("\n");
    }

     for (linha = 1; linha <= altura; linha++) {
        for ( i = 1; i <= linha; i++) {
            printf("#");
        }
        printf("\n");
    }




    return 0;
}

