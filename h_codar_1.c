#include <stdint.h>

void main(){
    int matricula, idade;
    char nome[50];
    float altura;

    printf("Digite o nome do aluno:\n");
    scanf("%s", &nome);
    printf("Digite a matricula do aluno:\n");
    scanf("%d", &matricula);
    printf("Digite a idade do aluno:\n");
    scanf("%d", &idade);
    printf("Digite a altura do aluno:\n");
    scanf("%f", &altura);

    printf("Nome do aluno: %s matricula: %d \n", nome, matricula);
    printf("Idade: %d altura: %.2f\n", idade, altura);
}