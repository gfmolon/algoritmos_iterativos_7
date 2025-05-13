#include <stdio.h>

int main() {

    int np = 0, i, n = 2, cont = 0;

    while (np < 50) {
        cont = 0;

        for (i = 1; i <= n; i++) {
            if (n % i == 0) {
                cont++;
            }
        }

        if (cont == 2) {
            printf("Primo: %d\n", n);
            np++;
        }

        n++;
    }

    return 0;
}
