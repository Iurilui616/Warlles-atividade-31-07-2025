//Escreva um programa que receba a entrada de um número de 5 dígitos, separe o número em seus dígitos componentes e os
//imprima separadamente uns dos outros, por 3 espaços. Por exemplo , se o usuário digitar 42339 , o programa deve escrever 4 2 3 3 9

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
