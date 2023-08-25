#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ex 1
int main1() {
    float x, y;
    scanf("%f %f", &x, &y);
    if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else if (x > 0 && y < 0) {
        printf("Q4\n");
    }
    else if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    else if (x == 0 && (y > 0 || y < 0)) {
        printf("Eixo Y\n");
    }
    else if ((x > 0 || x < 0) && y == 0) {
        printf("Eixo X\n");
    }
    return 0;
}

//ex 2
int main2() {
    float A=0, B=0, C=0;
    float maior, medio, menor;

    printf("Digite os tres lados de um triangulo: ");
    scanf("%f %f %f", &A, &B, &C);

        if (A >= B && A >= C){
            maior = A;
            if (B > C){
                medio = B;
                menor = C;
            } else {
                medio = C;
                menor = B;
            }
        }
        if (B >= A && B>= C){
            maior = B;
            if (A > C){
                medio = A;
                menor = C;
            } else {
                medio = C;
                menor = A;
            }
        }
        if (C >= A && C>= B){
            maior = C;
            if (A > B){
                medio = A;
                menor = B;
            } else {
                medio = B;
                menor = A;
            }
        }
        if(maior >= medio + menor){
            printf("Nao forma triangulo\n");
            return 0;
        } else {

            if (pow(maior,2) == pow(medio,2) + pow(menor,2)){
                printf("TRIANGULO RETANGULO\n");
            }    
            if (pow(maior,2) > pow(medio,2) + pow(menor,2)){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if (pow(maior,2) < pow(medio,2) + pow(menor,2)){
                printf("TRIANGULO ACUTANGULO\n");
            }
            if (maior == medio && maior == menor){
                printf("TRIANGULO EQUILATERO\n");
            }
            if ((maior == medio && maior != menor) || (medio == menor && medio != maior )){
                printf("TRIANGULO ISOSCELES\n");
            }
        }
        return 0;
        }

//ex 3
int main3() {
    int x=0, y=0, resultado=0;
    scanf("%i %i", &x, &y);

    if (y <= x) {
        y = y + 24;
        resultado = y - x;
    }

    else {
        resultado = y - x;
    }

    printf("O JOGO DUROU %i HORA(S)\n", resultado);
    return 0;
}

//ex 4
int main4() {
    int par=0, impar=0, neg=0, posi=0, n=0;
    scanf("%i", &n);
    int vetor[n];

    for (int i = 0; i < n; i++) {
        scanf("%i", &vetor[i]);
    }

    for (int i = 0; i < n; i++) {
        if (vetor[i] > 0) {
            posi++;

            if (vetor[i] % 2 == 0) {
                par++;
            }
            else {
                impar++;
            }
        }

        else if (vetor[i] < 0){
            neg++;

            if (vetor[i] % 2 == 0) {
                par++;
            }
            else {
                impar++;
            }
        }

        else {
            par++;
        }
    }

    printf("%i valor(es) par(es)\n%i valor(es) impar(es)\n%i valor(es) positivo(s)\n%i valor(es) negativo(s)\n", par, impar, posi, neg);
    return 0;
}

//ex 5
int main5() {
    int n=0;
    float a=0, b=0, c=0, media=0;
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &a, &b, &c);
        media = ((2*a + 3*b + 5*c) / 10);
        printf("%.1f\n", media);
    }

    return 0;  
}

//ex 6
int main6() {
    int x=0, y=0, soma=0;
    scanf("%i %i", &x, &y);

    if (x > y) {

        for (int i = y+1; i < x; i++) {
            if (i % 2 == 1 || i % 2 == -1) {
                soma += i;
            }
        }
    }

    else {

        for (int i = x+1; i < y; i++) {
            if (i % 2 == 1 || i % 2 == -1) {
                soma += i;
            }
        }
    }

    printf("Soma: %i\n", soma);
    return 0;
}

//ex 7
int main7() {
    int x=0, y=0, soma=0, n=0;
    scanf("%i", &n);

    for(int i = 0; i < n; i++) {
    scanf("%i %i", &x, &y);

    if (x > y) {

        for (int i = y+1; i < x; i++) {
            if (i % 2 == 1 || i % 2 == -1) {
                soma += i;
            }
        }
    }

    else {

        for (int i = x+1; i < y; i++) {
            if (i % 2 == 1 || i % 2 == -1) {
                soma += i;
            }
        }
    }

    printf("Soma: %i\n", soma);
    soma=0;
    }

    return 0;
}