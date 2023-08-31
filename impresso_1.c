#include<stdio.h>

int main(){

int linha, i, altura;

    printf("Insira a altura da figura: \n");
    scanf("%d", &altura);

    for (linha = 1;linha <= altura; linha++){
        for (i =1; i<=linha;i++){
             printf("#");
        }
              printf("\n");
        }

    return 0;
}
