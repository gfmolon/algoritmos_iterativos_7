#include <stdio.h>

int main() {

    int n, n_orig, d, invertido = 0;
    printf("Informe um número\n");
    scanf("%d", &n);

    n_orig = n;

    while (n > 0) {
        d = n % 10;                     // Pega último digito.
        invertido = invertido * 10 + d; // Adiciona o número invertido.
        n /= 10;                        // Remove último dígito.
    }

    printf("Número digitado: %d\nInvertido: %d\n", n_orig, invertido);

    return 0;
}
