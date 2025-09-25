#include <stdio.h>
#include <math.h>
typedef struct { double x, y; } Ponto; // criando a struct ponto
typedef struct { Ponto p1, p2; } Retangulo; // criando a struct retangulo
double area_retangulo(Retangulo r) { // fazendo a area do retangulo, definindo retangulo como r
double largura = fabs(r.p2.x - r.p1.x); // fabs = valor absoluto de um float, pega o ponto 2 e diminui pelo ponto 1 (x)
double altura = fabs(r.p2.y - r.p1.y); // pega o ponto 2 e diminui pelo ponto 1 (y)
return largura * altura; // retorna a largura * altura
}
int main(void) { // fazendo o resultado da struct de cima
    Ponto p1; 
    p1.x = 0.0; p1.y = 1.0;
    Ponto p2 = {5.0, 7.5}; // diminui um pelo outro (x = 5-0 = 5, y = 7,5-1 = 6,5)
    Retangulo r2; // = joga o resultado do p1 e p2 em r2
    r2.p1 = p1;
    r2.p2 = p2;
    printf("Área = %.2f\n", area_retangulo(r2)); // 5 * 6.5 = 32.5
return 0;
}