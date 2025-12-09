#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n, nmenores;
    double soma, media, percentualmenores;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);
    getchar();

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i = 0; i < n; i++) {
        printf("Dados da %da pessoa:\n", i+1);

        if (i > 0) getchar();

        printf("Nome: ");
        fgets(nomes[i], 50, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        printf("Idade: ");
        scanf("%d", &idades[i]);

        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++) {
        soma = soma + alturas[i];
    }

    media = soma / n;
    printf("Altura media: %.2lf\n", media);

    nmenores = 0;

    for (int i = 0; i < n; i++) {
        if (idades[i] < 16) {
            nmenores++;
            printf("%s\n", nomes[i]);
        }
    }

    percentualmenores = nmenores * 100.0 / n;

    printf("Menos de 16 anos: %.1lf %%\n", percentualmenores);

    return 0;
}
