#include <stdio.h>
#include <string.h>

#define MAX_NOME 50
#define NUM_DISCIPLINAS 4

typedef struct {
    char nome[MAX_NOME];
    int idade;
    char sexo;
    float notas[NUM_DISCIPLINAS];
    float media;
    char situacao[10];
} Aluno;

void calcularMediaSituacao(Aluno *a) {
    float soma = 0.0;
    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        soma += a->notas[i];
    }
    a->media = soma / NUM_DISCIPLINAS;

    if(a->media >= 6.0) {
        strcpy(a->situacao, "Aprovado!");
    } else {
        strcpy(a->situacao, "Reprovado!");
    }
}

int main() {
    Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, MAX_NOME, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0';

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite o sexo do aluno (M/F): ");
    scanf(" %c", &aluno.sexo);

    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Digite a nota da disciplina %d: ", i+1);
        scanf("%f", &aluno.notas[i]);
    }

    calcularMediaSituacao(&aluno);

    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Sexo: %c\n", aluno.sexo);
    for(int i = 0; i < NUM_DISCIPLINAS; i++) {
        printf("Nota %d: %.2f\n", i+1, aluno.notas[i]);
    }
    printf("Média: %.2f\n", aluno.media);
    printf("Situação: %s\n", aluno.situacao);

    return 0;
}
