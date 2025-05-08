#include <stdio.h>

int main() {

    int n, maior, menor, i, j;

    printf("Informe um número\n");
    scanf("%d", &n);

    maior = n;
    menor = n;

    for (i = 1; i <= 9; i++) {

        printf("Informe um número\n");
        scanf("%d", &n);

        if (n < menor) {
            menor = n;
        }
        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
