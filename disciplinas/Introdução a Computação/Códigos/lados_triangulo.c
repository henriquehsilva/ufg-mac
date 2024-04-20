#include <stdio.h>

int triangulo(float lado_a, float lado_b, float lado_c) {
    if ((lado_a - lado_b) < lado_c | (lado_b - lado_c) < lado_a | (lado_a - lado_c) < lado_b) {
        return 1;
    } else {
        return 0;
    }
}

int equilatero(float lado_a, float lado_b, float lado_c) {
    if (lado_a == lado_b & lado_b == lado_c) {
        return 1;
    } else {
        return 0;
    }
}

int isoceles(float lado_a, float lado_b, float lado_c) {
    if (lado_a == lado_b | lado_a == lado_c | lado_b == lado_c) {
        return 1;
    } else {
        return 0;
    }
}

int main(){

    float A,B,C;

    printf("Digite o valor para A: ");
    scanf("%f", &A);

    printf("Digite o valor para B: ");
    scanf("%f", &B);

    printf("Digite o valor para C: ");
    scanf("%f", &C);

    if (triangulo(A,B,C)) {
        if (equilatero(A,B,C)) {
            printf("Triangulo Equilatero\n");
        } else if (isoceles(A,B,C)) {
            printf("Triangulo Isoceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        } 
    } else {
        printf("Os valores não formam um triangulo");
    }
}
 