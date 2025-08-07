#include <stdio.h>
int main () {

char est1 [20];
char codigo1 [3];
char nome1 [21];
int pop1 = 0;
float km1 = 0.0;
float pib1 = 0.0;
int tur1 = 0;
float denpop1 =0.0;
float pibcap1 = 0.0;
char est2 [20];
char codigo2 [3];
char nome2 [22];
int pop2 = 0;
float km2 = 0.0;
float pip2 = 0.0;
int tur2 = 0;
float denpop2 = 0.0;
float pibcap2 = 0.0;

    printf("Insira as informações sobre as cartas,\nQual é o estado da carta 1?\n");
        scanf("%s", &est1);
    printf("Qual é o código da carta 1?\n");
        scanf("%s", &codigo1);
    printf("Qual é o nome da cidade da carta 1?\n");
        scanf("%s", &nome1);
    printf("Qual é o número da população da carta 1?\n");
        scanf("%d", &pop1);
    printf("Qual é a área da cidade da carta 1?\n");
        scanf("%f", &km1);
    printf("Qual é o PIB da carta 1?\n");
        scanf("%f", &pib1);
    printf("Quantos pontos turistícos a carta 1 possui?\n");
        scanf("%d", &tur1);
    printf("\n");
        denpop1 = pop1 / km1;

            printf("Carta 1\n");
            printf("Estado: %s\n", est1);
            printf("Codigo: %s\n", codigo1);
            printf("Nome da carta: %s\n", nome1);
            printf("Número da população: %d\n", pop1);
            printf("Área em km2: %f km2\n", km1);
            printf("PIB: %f\n", pib1);
            printf("Pontos turísticos: %d\n", tur1);
            printf("Densidade populacional: %f", denpop1);
            printf("\n");

    printf("Insira as informações sobre as cartas,\nQual é o estado da carta 2?\n");
        scanf("%s", &est2);
    printf("Qual é o código da carta 2?\n");
        scanf("%s", &codigo2);
    printf("Qual é o nome da cidade da carta 2?\n");
        scanf("%s", &nome2);
    printf("Qual é o número da população da carta 2?\n");
        scanf("%d", &pop2);
    printf("Qual é a área da cidade da carta 2?\n");
        scanf("%f", &km2);
    printf("Qual é o PIB da carta 2?\n");
        scanf("%f", &pip2);
    printf("Quantos pontos turistícos a carta 2 possui?\n");
        scanf("%d", &tur2);
    printf("\n");
        denpop2 = pop2 / km2;

            printf("Carta 2\n");
            printf("Estado: %s\n", est2);
            printf("Codigo: %s\n", codigo2);
            printf("Nome da carta: %s\n", nome2);
            printf("Número da população: %d\n", pop2);
            printf("Área em km2: %f km2\n", km2);
            printf("PIB: %f\n", pip2);
            printf("Pontos turísticos: %d\n", tur2);
            printf("Densidade populacional: %f", denpop2);
            printf("\n");




}
