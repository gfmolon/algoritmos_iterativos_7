#include <stdio.h>

int main() {

    int n1, n2, aux;
    printf("Qual valores de n1 e n2\n");
    scanf("%d%d", &n1, &n2);

    while (n2 != 0) {
        aux = n1 % n2;
        n1 = n2;
        n2 = aux;
    }

    printf("%d", n1);

    return 0;
}
