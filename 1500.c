#include <stdio.h>

int main() {

    int n, i, maior;
    printf("Informe número\n");
    scanf("%d", &n);

    maior = n;

    for (i = 1; i <= 9; i++) {

        printf("Informe número\n");
        scanf("%d", &n);

        if (n > maior) {
            maior = n;
        }
    }

    printf("Maior número: %d\n", maior);

    return 0;
}
