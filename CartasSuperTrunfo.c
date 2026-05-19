#include <stdio.h>

int main(){

    char estado1 = 'A';
    char codigo1[] = "A01";
    char cidade1[] = "Sao Paulo";
    unsigned int populacao1 = 12325000;
    float area1 = 1521.11;
    float PIB1 = 699.28;
    int pnts1 = 50;
    float densidade1, pibpercpt1;
    double superpoder1;

    char estado2 = 'B';
    char codigo2[] = "B02";
    char cidade2[] = "Rio de Janeiro";
    unsigned int populacao2 = 6748000;
    float area2 = 1200.25;
    float PIB2 = 300.50;
    int pnts2 = 30;
    float densidade2, pibpercpt2;
    double superpoder2;

    int opcao1, opcao2;

    float valor1c1, valor1c2;
    float valor2c1, valor2c2;

    float soma1, soma2;

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pibpercpt1 = PIB1 / populacao1;

    densidade2 = (float) populacao2 / area2;
    pibpercpt2 = PIB2 / populacao2;

    printf("========== MENU ==========\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos turisticos\n");
    printf("5. Densidade demografica\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

    if(opcao1 == opcao2){
    printf("Nao pode escolher o mesmo atributo duas vezes!\n");
    return 0;
    }

    switch(opcao1){

    case 1:
        valor1c1 = populacao1;
        valor1c2 = populacao2;
    break;

    case 2:
        valor1c1 = area1;
        valor1c2 = area2;
    break;

    case 3:
        valor1c1 = PIB1;
        valor1c2 = PIB2;
    break;

    case 4:
        valor1c1 = pnts1;
        valor1c2 = pnts2;
    break;

    case 5:
        valor1c1 = densidade1;
        valor1c2 = densidade2;
    break;

    default:
        printf("Opcao invalida!\n");
        return 0;
    }


        switch(opcao2){

    case 1:
        valor2c1 = populacao1;
        valor2c2 = populacao2;
    break;

    case 2:
        valor2c1 = area1;
        valor2c2 = area2;
    break;

    case 3:
        valor2c1 = PIB1;
        valor2c2 = PIB2;
    break;

    case 4:
        valor2c1 = pnts1;
        valor2c2 = pnts2;
    break;

    case 5:
        valor2c1 = densidade1;
        valor2c2 = densidade2;
    break;

    default:
        printf("Opcao invalida!\n");
        return 0;
    }

    soma1 = valor1c1 + valor2c1;
    soma2 = valor1c2 + valor2c2;

    if(soma1 > soma2){
    printf("Carta 1 venceu!\n");
    }
    else if(soma2 > soma1){
    printf("Carta 2 venceu!\n");
    }
    else{
    printf("Empate!\n");
    }

    printf("\nSoma da Carta 1: %.2f\n", soma1);
    printf("Soma da Carta 2: %.2f\n", soma2);


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

   
    return 0;
}