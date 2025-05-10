
#include <stdio.h>

int main() {
    int n, invertido = 0, digito;

    printf("Informe um número:\n");
    scanf("%d", &n);

    while (n > 0) {
        digito = n % 10;                     // Pega o último dígito
        invertido = invertido * 10 + digito; // Adiciona ao invertido
        n /= 10;                             // Remove o último dígito
    }

    printf("Número invertido: %d\n", invertido);

    return 0;
}
