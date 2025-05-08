#include <stdio.h>

int main() {

    int n, i;
    printf("Escreva um valor\n");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Erro\n");
        return 1;
    }

    for (i = 2; i <= n; i++) {
        if (n % i == 0) {
            printf("Achou! %d\n", i);
            break;
        }
    }

    return 0;
}
