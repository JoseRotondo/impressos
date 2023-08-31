#include <stdio.h>

int main() {

    int altura;
    int i, j;
    printf("Informe a altura da figura: ");
    scanf("%d", &altura);
    printf("\n");
    for (i = 1; i <= altura; i++) {
        printf("*");
    }
    printf("\n");

     for (i = 1; i <= altura; i++) {
        printf("*");

        for (j = 1; j <= altura - 2; j++) {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }

    for (i = 1; i <= altura; i++) {
        printf("*");
    }
    printf("\n");

    return 0;
}
