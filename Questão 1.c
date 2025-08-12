#include <stdio.h>

int main() {
    int num;
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &num);

    int d1 = num / 10000;
    int d2 = (num / 1000) % 10;
    int d3 = (num / 100) % 10;
    int d4 = (num / 10) % 10;
    int d5 = num % 10;

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

    return 0;
}
