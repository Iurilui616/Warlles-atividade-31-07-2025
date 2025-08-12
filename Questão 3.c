#include <stdio.h>

int main() {
    short idade;
    int valor;
    long conta;

    printf("Digite a idade: ");
    scanf("%hd", &idade);

    printf("Digite o montante a depositar: ");
    scanf("%d", &valor);

    printf("Digite o numero da conta: ");
    scanf("%ld", &conta);

    printf("\n--- Dados informados ---\n");
    printf("Idade: %hd\n", idade);
    printf("Montante: %d\n", valor);
    printf("Conta: %ld\n", conta);

    return 0;
}
