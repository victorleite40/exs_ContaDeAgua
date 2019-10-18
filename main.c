#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define SIZE 10

typedef struct consumo
{
    float consumo, custoAgua, valor;
    char tipo[10];
} tConsumo;

int main()
{

tConsumo v[SIZE];

v[0].tipo;
v[0].consumo;
v[0].custoAgua;
v[0].valor;

int acmR=0;
int acmC=0;
int acmI=0;

for (int i = 0; i < SIZE; i++)
{
    printf("Qual o tipo do consumidor?\nresidencial, \ncomercial \nou industrial: \n");
    fflush(stdin);
    gets(v[i].tipo);

    printf("Qual o consumo de aguita em m3?\n");
    scanf("%f", &v[i].consumo);

    if (strcmp(v[i].tipo, "residencial") == 0) {
        v[i].valor = 5 + (v[i].consumo * 0.05);
        acmR++;
    } else if (strcmp(v[i].tipo, "comercial") == 0)
    {
        if (v[i].consumo >= 80) {
            v[i].valor = 500 + ((v[i].consumo - 80) * 0.25);
        } else {
            v[i].valor = 500;
            acmC++;
        }
    } else if (strcmp(v[i].tipo, "industrial") == 0)
    {
        if (v[i].consumo >= 100) {
            v[i].valor = 800 + ((v[i].consumo - 100) * 0.04);
        } else {
            v[i].valor = 800;
            acmI++;
        }
    }
}
printf("INDUSTRIAIS: \n");
for (int iI = 0; iI < SIZE; iI++) {
    if (strcmp(v[iI].tipo, "industrial") == 0) {
        printf("[%i] R$%.2f\n", iI, v[iI].valor);
    }
}
printf("COMERCIAIS: \n");
for (int iC = 0; iC < SIZE; iC++) {
    if (strcmp(v[iC].tipo, "comercial") == 0) {
        printf("[%i] R$%.2f\n", iC, v[iC].valor);
    }
}
printf("RESIDENCIAIS: \n");
for (int iR = 0; iR < SIZE; iR++) {
    if (strcmp(v[iR].tipo, "residencial") == 0) {
        printf("[%i] R$%.2f\n", iR, v[iR].valor);
    }
}

return 0;
}
