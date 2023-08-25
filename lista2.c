#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//ex 1
int main1() {
    int n=0;
    float resultado=0;
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {
        resultado += (float)1/i;
    }

    printf("O resultado é: %f\n", resultado);
    return 0;
}


//ex 2
int main2() {
    int n=0;
    float resultado=0, x=1;
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            resultado += -1/x;
        }

        else {
            resultado += 1/x;
        }
        x++;
    }

    printf("O resultado é: %f\n", resultado);
    return 0;
}


//ex 3 (A)
int main3a() {
    int n=0;
    float resultado=0, x=1;
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            resultado += -4/x;
        }

        else {
            resultado += 4/x;
        }

        x = x+2;
    }

    printf("O resultado é: %f\n", resultado);
    return 0;
}


//ex 3 (B)
int main3b() {
    int n=0;
    float resultado=3, x=2;
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            resultado += -(4/(x*(x+1)*(x+2)));
        }

        else {
            resultado += 4/(x*(x+1)*(x+2));
        }

        x = x+2;
    }

    printf("O resultado é: %f\n", resultado);
    return 0;
}


//ex 4
int main4() {
    int n=0, x=1;
    float resultado=1, fat=1;
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    for (int i=1; i < n; i++) {
        fat = fat*x;
        resultado += 1/fat;
        x++;
    }

    printf("O resultado é: %f\n", resultado);
    return 0;
}

//ex 5
int main5() {
    int n=0, x=0, y=1;
    float fat=1, resultado=1;
    printf("Digite quantos termos e o valor de x (respectivamente):\n");
    scanf("%i %i", &n, &x);
    int a=x;

    if (n != 0) {
    for (int i = 1; i < n; i++) {
        fat = fat*y;
        resultado += a/fat;
        a = x*a;
        y++;
    }

    printf("O resultado é: %f\n", resultado);
    }

    else {
        printf("0.000000\n");
    }
    
    return 0;
}

//ex 6
int main6() {
    int n=0, a=1;
    double x=0;

    printf("Digite o valor do ângulo (em radianos):\n");
    scanf("%lf", &x);
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    double termo = x, seno = 0;

    for (int i = 1; i <= n; i++) {
        seno += termo;
        termo *= (x/(a+1)) * (x/(a+2)) * (-1);
        a += 2;
    }

    printf("O valor do seno de %.3lf é: %.15lf\n", x, seno);

    return 0;
}

//ex 7
int main7() {
    int n=0;
    double x=0;

    printf("Digite o valor do ângulo (em radianos):\n");
    scanf("%lf", &x);
    printf("Digite quantos termos:\n");
    scanf("%i", &n);

    double termo = 1, cos = 0;

    for (int i = 0; i <= 2*n; i+=2) {
        cos += termo;
        termo *= (x/(i+1)) * (x/(i+2)) * (-1);
    }

    printf("O valor do cosseno de %.3lf é: %.15lf\n", x, cos);

    return 0;
}