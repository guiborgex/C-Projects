#include <stdio.h>
void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    double C, F;
    char resp;
    char R;

    do {

    printf("Caso queira de Celsius p Fahrenheit escreva C, se for de Fahrenheit p Celsius escreva F: ");
    scanf(" %c", &R);

    if (R == 'C'|| R == 'c' ) {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);
        F = 9.0 * C / 5.0 + 32.0;
        printf("Equivalente em Fahrenheit: %.1lf\n", F);
    }

    else if (R == 'F'|| R == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);
        C = 5.0 * (F - 32.0) / 9.0;
        printf("Equivalente em Celsius: %.1lf\n", C);
    }

    else {
        printf("Entre somente com F/C");
    }

        printf("Deseja repetir (s/n)? ");
        scanf(" %c", &resp);
    } while (resp == 's'|| resp == 'S');

    return 0;
}



