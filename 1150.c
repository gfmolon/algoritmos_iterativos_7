#include <stdio.h>

int main() {

    int n, i, maior;
    printf("Informe o valor de n\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro.\n");
        return 1;
    }
    maior = 1;
    for (i = 1; i < n; i++) {
        if (n % i == 0) {
            maior = i;
        }
    }

    printf("Maior divisor de %d: %d", n, maior);

    return 0;
}
