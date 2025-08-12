#include <stdio.h>
int main () {

char est1 [20];
char codigo1 [3];
char nome1 [20];
int pop1 = 0;
float km1 = 0.0;
float pib1 = 0.0;
int tur1 = 0;
float denpop1 =0.0;
float pibcap1 = 0.0;
float sp1 = 0.0;
char est2 [20];
char codigo2 [3];
char nome2 [20];
int pop2 = 0;
float km2 = 0.0;
float pib2 = 0.0;
int tur2 = 0;
float denpop2 = 0.0;
float pibcap2 = 0.0;
float sp2 = 0.0;

    printf("Insira as informações sobre as cartas,\nQual é o estado da carta 1?\n");
        scanf("%s", est1);
    printf("Qual é o código da carta 1?\n");
        scanf("%s", codigo1);
    printf("Qual é o nome da cidade da carta 1?\n");
        scanf(" %20[^\n]", nome1);
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
        pibcap1 = (pib1 * 1000000000.0f) / pop1;
            printf("Carta 1\n");
            printf("Estado: %s\n", est1);
            printf("Codigo: %s\n", codigo1);
            printf("Nome da carta: %s\n", nome1);
            printf("Número da população: %d\n", pop1);
            printf("Área em km2: %.2f km2\n", km1);
            printf("PIB: %.2f\n", pib1);
            printf("Pontos turísticos: %d\n", tur1);
            printf("Densidade populacional: %.2f\n", denpop1);
            printf("PIB per capita: %.2f\n", pibcap1);
            printf("\n");
        sp1 = pop1 + km1 + pib1 + tur1 + pibcap1 + (1 / denpop1);

    printf("Insira as informações sobre as cartas,\nQual é o estado da carta 2?\n");
        scanf("%s", est2);
    printf("Qual é o código da carta 2?\n");
        scanf("%s", codigo2);
    printf("Qual é o nome da cidade da carta 2?\n");
        scanf(" %20[^\n]", nome2);
    printf("Qual é o número da população da carta 2?\n");
        scanf("%d", &pop2);
    printf("Qual é a área da cidade da carta 2?\n");
        scanf("%f", &km2);
    printf("Qual é o PIB da carta 2?\n");
        scanf("%f", &pib2);
    printf("Quantos pontos turistícos a carta 2 possui?\n");
        scanf("%d", &tur2);
    printf("\n");
        denpop2 = pop2 / km2;
        pibcap2 = (pib2 * 1000000000.0f) / pop2;
            printf("Carta 2\n");
            printf("Estado: %s\n", est2);
            printf("Codigo: %s\n", codigo2);
            printf("Nome da carta: %s\n", nome2);
            printf("Número da população: %d\n", pop2);
            printf("Área em km2: %.2f km2\n", km2);
            printf("PIB: %.2f\n", pib2);
            printf("Pontos turísticos: %d\n", tur2);
            printf("Densidade populacional: %.2f\n", denpop2);
            printf("PIB per capita: %.2f\n", pibcap2);
            printf("\n");
        sp2 = pop2 + km2 + pib2 + tur2 + pibcap2 + (1 / denpop2);    
            
            printf("Comparação das Cartas:\n");
    if(pop1 > pop2){
        printf("População: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    }
    if(km1 > km2){
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    }
    if(pib1 > pib2){
        printf("PIB: Carta 1 enceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    }
    if(tur1 > tur2){
        printf("Pontos turísticos: Carta 1 vence\n");
    } else {
        printf("Pontos turísticos: Carta 2 vence\n");
    }
    if(denpop1 > denpop2){
        printf("Densidade populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade populacional: Carta 2 venceu\n");
    }        
    if(pibcap1 > pibcap2){
        printf("PIB per capita: Carta 1 venceu\n");
    } else {
        printf("PIB per capita: Carta 2 venceu\n");
    }        
    if(sp1 > sp2){
        printf("Super poder: Carta 1 venceu\n");
    } else {
        printf("Super poder: Carta 2 venceu\n");
    }              
return 0;
}