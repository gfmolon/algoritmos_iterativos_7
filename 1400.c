#include <stdio.h>

int main() {

    int i, n, maior;

    maior = 0;
    for (i = 1; i <= 10; i++) {
        printf("Informe o valor\n");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior: %d\n", maior);

    return 0;
}
