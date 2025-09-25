#include <stdio.h>
#include <math.h>
typedef struct {
char nome[50];
int matricula;
float nota;
} Pessoa;
double media (Pessoa p1, Pessoa p2) {
    return (p1.nota + p2.nota) / 2.0;
}
int main(void) {
    Pessoa p1, p2;
    printf("Informe o nome da primeira pessoa:\n"); 
    scanf("%s", p1.nome);
    printf("Informe a matricula da primeira pessoa:\n");
    scanf("%d", &p1.matricula);
    printf("Informe a nota da primeira pessoa:\n");
    scanf("%f", &p1.nota);
    printf("Informe o nome da segunda pessoa:\n");
    scanf("%s", p2.nome);
    printf("Informe a matricula da segunda pessoa:\n");
    scanf("%d", &p2.matricula);
    printf("Informe a nota da segunda pessoa:\n");
    scanf("%f", &p2.nota);
    printf("Media = %.2f\n", media(p1, p2));
return 0;
}