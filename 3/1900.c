#include <stdio.h>

int main() {

    int i, j, n, cont;

    for (i = 1; i <= 10; i++) {

        printf("Informe um valor\n");
        scanf("%d", &n);

        cont = 0;
        for (j = 1; j <= n; j++) {
            if (n % j == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("Número Primo: %d\n", j);
        }
    }

    return 0;
}
