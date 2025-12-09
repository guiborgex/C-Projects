#include <stdio.h>
#include <stdlib.h>

int main() {

    int n, i;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);
    printf("\n");

    double soma, media, vet[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\n");
    printf("Valores: ");
    for (i = 0; i < n; i++) {
        printf("%.1lf  ", vet[i]);
    }
    printf("\n");

    soma = 0;
    printf("Soma: ");
    for (i = 0; i < n; i++) {
        soma = vet[i] + soma;
    }
    printf("%.2lf\n", soma);

    media = 0;
    media = soma / n;
    printf("Media: %.2lf\n", media);

    return 0;
}
