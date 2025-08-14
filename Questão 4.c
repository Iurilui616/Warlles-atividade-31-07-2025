#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("Menu de Operacoes:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &a);

    if (opcao == 4) {
        do {
            printf("Digite o segundo valor (nao pode ser 0): ");
            scanf("%f", &b);
            if (b == 0)
                printf("Valor invalido! Tente novamente.\n");
        } while (b == 0);
    } else {
        printf("Digite o segundo valor: ");
        scanf("%f", &b);
    }

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;
        case 4:
            printf("Resultado: %.2f\n", a / b);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
