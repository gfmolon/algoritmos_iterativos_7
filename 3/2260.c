#include <stdio.h>

int main() {

    int cont, i, n, np = 0;

    printf("Informe um número\n");
    scanf("%d", &n);

    if (n == 1 || n % 2 == 0) {
        n++;
    } else {
        n += 2;
    }

    while (np == 0) {
        cont = 0;
        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("Próximo primo ímpar: %d\n", n);
            np = 1;
        } else {
            n += 2;
        }
    }

    return 0;
}
