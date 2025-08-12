#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if ((n % 2 == 0 && n % 3 != 0) || (n % 3 == 0 && n % 2 != 0)) {
        printf("O numero e divisivel por 2 OU por 3, mas nao por ambos.\n");
    } else {
        printf("O numero NAO atende a condicao.\n");
    }

    return 0;
}
