#include <stdio.h>

int main() {

    int n, i, menor;

    printf("Informe um número\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro\n");
        return 1;
    }

    menor = 0;
    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            menor = i;
            break;
        }
    }

    printf("Menor divisor: %d\n", menor);

    return 0;
}
