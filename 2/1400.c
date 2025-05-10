#include <stdio.h>

int main() {

    int n, i, maior = 0;

    for (i = 1; i <= 10; i++) {
        printf("Informe um número\n");
        scanf("%d", &n);

        if (n > 0) {
            if (n > maior) {
                maior = n;
            }
        } else {
            printf("Número inválido\n");
            return 1;
        }
    }

    printf("Maior:%d\n", maior);

    return 0;
}
