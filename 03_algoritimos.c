#include <stdio.h>

int main() {

    int numero;
    
    printf("insira um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("o numero é par.\n");
    } else {
        printf("o numero é impar.\n");
    }
    return 0;
}
