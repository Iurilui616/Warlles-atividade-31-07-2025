#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0 && n % 3 != 0) {
        printf("O numero e divisivel por 2, mas nao por 3.\n");
    } else if (n % 3 == 0 && n % 2 != 0) {
        printf("O numero e divisivel por 3, mas nao por 2.\n");
    } else if (n % 2 == 0 && n % 3 == 0) {
        printf("O numero e divisivel por 2 e por 3.\n");
    } else {
        printf("O numero nao e divisivel por 2 nem por 3.\n");
    }

    return 0;
}
