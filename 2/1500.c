#include <stdio.h>

int main() {

    int i, n, maior;

    printf("Informe um número\n");
    scanf("%d", &n);

    maior = n;

    for (i = 1; i <= 9; i++) {

        printf("Informe um número\n");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior:%d\n", maior);

    return 0;
}
