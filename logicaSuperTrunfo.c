#include <stdio.h>

int main() {
    // Declaração de variáveis:
    char estado1[2], estado2[2];//Estado, ou país será representado por uma letra
    char codigo1[4], codigo2[4];//Código da cidade
    char cidade1[50], cidade2[50];//Nome da cidade
    unsigned long int populacao1, populacao2;//População da cidade
    float area1, area2;//Área da cidade (em km²)
    float pib1, pib2;//PIB da cidade  
    int pontos_turisticos1, pontos_turisticos2;//Número de pontos turísticos da cidade

    float densidade_populacional1, densidade_populacional2;//Densidade populacional da cidade (população/área)
    float pib_per_capta1, pib_per_capta2;//PIB per capita da cidade (pib/população)
    float superpoder1, superpoder2;// Calculada conforme a soma de todas as propriedades da carta
    float superpoder;//Superpoder da carta | (Soma de todas as propriedades da carta)

    // Inserção de dados das cartas:
    //Carta 1
    printf(" *** Carta 1 ***\n");
    printf("Digite estado ou país da primeira carta:\n ");
    scanf("%1s", estado1);

    printf("Digite código da carta:\n ");
    scanf("%4s[^\n]", codigo1);

    printf("Digite nome da cidade:\n ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite população da cidade:\n ");
    scanf("%lu", &populacao1);

    printf("Digite área da cidade:\n ");
    scanf(" %f", &area1);
    while (getchar() != '\n');

    printf("Digite PIB da cidade:\n ");
    scanf(" %f", &pib1);
    while (getchar() != '\n');

    printf("Digite número de pontos turísticos da cidade:\n "); 
    scanf("%d", &pontos_turisticos1); 
    while (getchar() != '\n');  

    
    printf("------------------------------------------\n");
    printf("\n");
    //Carta 2
    printf(" *** Carta 2 ***\n");
    printf("Digite estado ou país da segunda carta:\n ");
    scanf("%1s", estado2);

    printf("Digite código da carta:\n ");
    scanf("%4s", codigo2);

    printf("Digite nome da cidade:\n ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite população da cidade:\n ");
    scanf("%lu", &populacao2);

    printf("Digite área da cidade:\n ");
    scanf(" %f", &area2);
    while (getchar() != '\n');

    printf("Digite PIB da cidade:\n ");
    scanf(" %f", &pib2);
    while (getchar() != '\n');

    printf("Digite número de pontos turísticos da cidade:\n "); 
    scanf("%d", &pontos_turisticos2); 
    while (getchar() != '\n');  
   
   //Cálculo da densidade populacional
    densidade_populacional1 = populacao1/area1;
    densidade_populacional2 = populacao2/area2;
    //Cálculo do PIB per capita
    pib_per_capta1 = pib1/populacao1;
    pib_per_capta2 = pib2/populacao2;

    //Cálculo do superpoder
    superpoder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + (1/densidade_populacional1) + pib_per_capta1;
    superpoder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + (1/densidade_populacional2) + pib_per_capta2;

    printf("------------------------------------------\n");
    printf("\n");

    //Mensagem de confirmação
    printf("***Cartas cadastradas com sucesso!***\n");
    printf("\n");

    printf("------------------------------------------\n");

    // Exibição dos dados das cartas:
    //Carta 1
    printf("\n");
    printf(" *** Carta 1 ***\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1); 
    printf("Nome: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);   
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.1f hab/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capta1);
    printf("**Superpoder**: %.f\n", superpoder1);
    
    printf("------------------------------------------\n");

    //Carta 2
    printf("\n");
    printf(" *** Carta 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.1f hab/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capta2);
    printf("**Superpoder**: %.f\n", superpoder2);

    printf("------------------------------------------\n");
    //comparação entre as cartas com base na população
    printf("\n");
    printf(" *** Resultado da Rodada com base na População ***\n");
    printf("\n");
    printf("População da Carta 1: %d\n", populacao1);
    printf("População da Carta 2: %d\n", populacao2);
    printf("\n");
    if (populacao1 > populacao2) {
        printf("**** A Carta 1 venceu a rodada! ****\n");
    } else (populacao1 < populacao2);{
        printf("A Carta 2 venceu a rodada!\n");    
    }



    return 0;
}