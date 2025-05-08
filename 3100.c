#include <stdio.h>

int main() {

    int n, n_orig, i, d, soma;

    for (i = 1; i <= 3; i++) {

        printf("Informe um número\n");
        scanf("%d", &n);

        n_orig = n;

        d = 0;
        soma = 0;
        while (n > 0) {
            d = n % 10;
            soma += d;

            n /= 10;
        }
        printf("Soma de %d: %d\n", n_orig, soma);
    }

    return 0;
}
