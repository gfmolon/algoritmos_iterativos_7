#include <stdio.h>

int main() {

    int n, i, d, soma_digitos;

    for (i = 1; i <= 10; i++) {

        printf("Informe o número\n");
        scanf("%d", &n);

        soma_digitos = 0;

        while (n != 0) {
            d = n % 10;
            soma_digitos += d;
            n /= 10;
        }
        printf("Soma dos dígitos:%d\n", soma_digitos);
    }

    return 0;
}
