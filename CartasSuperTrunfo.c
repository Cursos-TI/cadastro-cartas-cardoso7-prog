#include <stdio.h>

int main(){

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned int populacao1 = 12325000;
    int pnts1;
    float area1, PIB1;
    float densidade1, pibpercpt1;
    double superpoder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned int populacao2 = 6748000;
    int pnts2;
    float area2, PIB2;
    float densidade2, pibpercpt2;
    double superpoder2;

    int opcao;


    printf("=============== CARTA 1 ==============\n");

    printf("Qual é o estado: ");
    scanf(" %c", &estado1);

    printf("Qual é o codigo: ");
    scanf(" %3s", codigo1);

    printf("Qual é a cidade: ");
    scanf(" %49s", cidade1);

  /* printf("Qual é a populacao: ");
    scanf("%u", &populacao1); */

    printf("Qual é a area: ");
    scanf("%f", &area1);

    printf("Qual é o PIB: ");
    scanf("%f", &PIB1);

    printf("Quantos pontos turísticos: ");
    scanf("%d", &pnts1);


    printf("\n=============== CARTA 2 ==============\n");

    printf("Qual é o estado: ");
    scanf(" %c", &estado2);

    printf("Qual é o codigo: ");
    scanf(" %3s", codigo2);

    printf("Qual é a cidade: ");
    scanf(" %49s", cidade2);

    /* printf("Qual é a populacao: ");
    scanf("%u", &populacao2); */

    printf("Qual é a area: ");
    scanf("%f", &area2);

    printf("Qual é o PIB: ");
    scanf("%f", &PIB2);

    printf("Quantos pontos turísticos: ");
    scanf("%d", &pnts2);

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pibpercpt1 = PIB1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    pibpercpt2 = PIB2 / populacao2;

    // MENU

    printf("========== MENU ==========\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\nComparando populacao...\n");
        if(populacao1 > populacao2){
        printf("Carta 1 Venceu!\n");
        } else if (populacao2 > populacao1){ 
        printf("Carta 2 Venceu!");
        } else{
            printf("Empate!\n");
    }
    break;
    case 2: 
        printf("\nComparando area\n");
        if(area1 > area2){
        printf("Carta 1 venceu!");
        }else if (area2 > area1){
        printf("Carta 2 venceu!");
        } else {
            printf("Empate!\n");
        }
    break;
    case 3:
         printf("\nComparando area\n");
        if(PIB1 > PIB2){
        printf("Carta 1 venceu!");
        }else if (PIB2 > PIB1){
        printf("Carta 2 venceu!");
        } else {
            printf("Empate!\n");
        }
    break;
    case 4: 
         printf("\nComparando area\n");
        if(pnts1 > pnts2){
        printf("Carta 1 venceu!");
        }else if (pnts2 > pnts1){
        printf("Carta 2 venceu!");
        } else {
            printf("Empate!\n");
        }
    break;
    case 5: 
         printf("\nComparando area\n");
        if(densidade1 < densidade2){
        printf("Carta 1 venceu!");
        }else if (densidade2 < densidade1){
        printf("Carta 2 venceu!");
        } else {
        printf("Empate!\n");
        }
    break;
    default:
        printf("Opcao invalida!");
    break;
    }

    // Exibição

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %u\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Numero de pontos turisticos: %d\n", pnts1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibpercpt1);


    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %u\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Numero de pontos turisticos: %d\n", pnts2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibpercpt2);

    //-----------------superpoder------------------------
  /* superpoder1 = populacao1 + area1 + PIB1 + pnts1 + (1 / densidade1) + pibpercpt1;
    superpoder2 = populacao2 + area2 + PIB2 + pnts2 + (1 / densidade2) + pibpercpt2; 

    printf("\n---- SUPERPODERES ----\n");

    printf("A populacao maior é: %d\n", populacao1 > populacao2);
    printf("A area maior é: %d\n", area1 > area2);
    printf("O PIB maior é: %d\n", PIB1 > PIB2);
    printf("O numero de pontos turisticos maior é: %d\n", pnts1 > pnts2);
    printf("A densidade populacional menor é: %d\n", densidade1 < densidade2);
    printf("O PIB per capita maior é: %d\n", pibpercpt1 > pibpercpt2);
    printf("A carta com o superpoder maior é: %d\n", superpoder1 > superpoder2); */

    // --------------------if/else-------------------

    /* printf("----CARTA VENCEDORA----\n");
    if(populacao1 > populacao2){
        printf("População: Carta 1 Venceu! \n");
    } else {
        printf("População: Carta 2 Venceu!");
    } */

    return 0;
}