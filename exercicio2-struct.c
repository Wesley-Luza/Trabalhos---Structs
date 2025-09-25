#include <stdio.h>
#include <math.h>
typedef struct { double x, y; } Ponto; // cria struct Ponto
typedef struct { Ponto p1, p2; } DistEuclidiana; // cria struct DistEuclidiana
double area_euclidiana(DistEuclidiana de) { // define função area_euclidiana
double dx = de.p2.x - de.p1.x; // calcula diferença em x
double dy = de.p2.y - de.p1.y; // calcula diferença em y
return sqrt(dx*dx + dy*dy); // retorna formula da distância euclidiana
}
int main(void) {
    Ponto p1; // informa p1
    p1.x = 6.0; p1.y = 3.0;
    Ponto p2; // informa p2
    p2.x = 12.0; p2.y = 5.0; // atribui valores a p2, e vai diminuir o p2 de p1 (12-6, 5-3)
    DistEuclidiana de2; // informa de2
    de2.p1 = p1; // atribui p1 a de2.p1
    de2.p2 = p2; // atribui p2 a de2.p2
    printf("Área = %.2f\n", area_euclidiana(de2)); // imprime área
return 0;
}