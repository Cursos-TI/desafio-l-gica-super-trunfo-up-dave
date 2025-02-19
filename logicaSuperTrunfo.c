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

    int escolha;//Escolha do atributo a ser comparado

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
    //Escolha do atributo a ser comparado
    printf("\n");
    printf("Escolha o atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");
    printf("\n");
    
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    printf("\n");

    //Comparação dos atributos
    switch (escolha)
    {
    case 1: //População
        printf("Você escolheu: População\n");
        printf("Comparando População...\n");
        printf("\n");
        if (populacao1 > populacao2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (populacao1 < populacao2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 2: //Área
        printf("Você escolheu: Área\n");
        printf("Comparando Área...\n");
        printf("\n");
        if (area1 > area2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (area1 < area2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 3: //PIB
        printf("Você escolheu: PIB\n");
        printf("Comparando PIB...\n");
        printf("\n");
        if (pib1 > pib2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (pib1 < pib2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 4: //Pontos turísticos
        printf("Você escolheu: Pontos turísticos\n");
        printf("Comparando Pontos turísticos...\n");
        printf("\n");
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 5: //Densidade populacional
        printf("Você escolheu: Densidade populacional\n");
        printf("Comparando Densidade populacional...\n");
        printf("\n");
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (densidade_populacional1 > densidade_populacional2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 6: //PIB per capita
        printf("Você escolheu: PIB per capita\n");
        printf("Comparando PIB per capita...\n");
        printf("\n");
        if (pib_per_capta1 > pib_per_capta2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (pib_per_capta1 < pib_per_capta2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 7: //Superpoder
        printf("Você escolheu: Superpoder\n");
        printf("Comparando Superpoder...\n");
        printf("\n");
        if (superpoder1 > superpoder2)
        {
            printf("### Vencedor: Carta 1! ###\n");
        }
        else if (superpoder1 < superpoder2)
        {
            printf("### Vencedor: Carta 2! ###\n");
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

       

    return 0;
}