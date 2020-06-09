#include<stdio.h>
#include<string.h>

typedef struct {
    char nome[50],
         curso[50];
    int  num_mat;
} Estudante;

void receber(Estudante aluno[], int tam) {
    int i;
    for (i=0;i<tam;i++) {
        printf("\nInforme o nome do aluno: ");
        fflush(stdin);
        fgets(aluno[i].nome,50,stdin);
        printf("Informe o curso do aluno : ");
        fflush(stdin);
        fgets(aluno[i].curso,50,stdin);
        printf("Informe a  matricula do aluno: ");
        fflush(stdin);
        scanf("%d",&aluno[i].num_mat);
    }
}

void mostrar(Estudante aluno[], int tam) {
    int i;
    for (i=0;i<tam;i++) {
        printf("\nNome do Aluno: %s", aluno[i].nome);
        printf("Curso matriculado: %s",aluno[i].curso);
        printf("Numero da matricula: %d \n",aluno[i].num_mat);
    }

}
int main () {
    #define MAX 5
    Estudante aluno[MAX];
    receber(aluno,MAX);
    mostrar(aluno,MAX);
    return 0;
}
