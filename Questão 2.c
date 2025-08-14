#include <stdio.h>

int main() {
    int i;

    printf("Numero\tQuadrado\tCubo\n");
    for (i = 0; i <= 10; i++) {
        printf("%d\t%8d\t%8d\n", i, i * i, i * i * i);
    }

    return 0;
}
