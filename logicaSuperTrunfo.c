#include <stdio.h>
#include <string.h>

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

    int escolha1, escolha2;

    float final1a, final1b, final2a, final2b, soma_atributos1, soma_atributos2;  //Escolha do atributo a ser comparado

    
    // Exemplo de cartas para teste:
    strcpy(estado1, "BR");
    strcpy(codigo1, "001");
    strcpy(cidade1, "São Paulo");
    populacao1 = 12325232;
    area1 = 1521.11;
    pib1 = 1.6;
    pontos_turisticos1 = 10;
    pontos_turisticos1 = 10;

    strcpy(estado2, "BR");
    strcpy(codigo2, "02");
    strcpy(cidade2, "Rio de Janeiro");
    populacao2 = 6784986;
    area2 = 1200.11;
    pib2 = 1.2;
    pontos_turisticos2 = 8;
    pontos_turisticos2 = 8;
        
    

    // Mensagem de boas-vindas:
    printf("Bem-vindo ao Super Trunfo de Cidades!\n");
    printf("\n");
    
    // Inserção de dados das cartas:
    //Carta 1
    /*
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
   */
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
    //Escolha do primeiro atributo a ser comparado
    printf("\n");
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");
    printf("\n");
    
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    if (escolha1 != 1 && escolha1 != 2 && escolha1 != 3 && escolha1 != 4 && escolha1 != 5 && escolha1 != 6 && escolha1 != 7)
    {
        printf("Opção inválida\n");
        return 0;
    }
        
    printf("\n");

    // Escolha do segundo atributo a ser comparado
    printf("Escolha o segundo atributo a ser comparado:\n");
    switch (escolha1)
    {
    case 1:
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 2:
    printf("1 - População\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 3:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 4:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 5:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("6 - PIB per capita\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 6:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("7 - Superpoder\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    case 7:
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");

    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);
    printf("\n");
        break;
    
    default:
        printf("Opção inválida\n");
        break;
    }

    //Comparação dos atributos da primeira escolha
    switch (escolha1)
    {
    case 1: //População
        printf("Você escolheu: População\n");
        final1a = populacao1;
        final2a = populacao2;
        printf("Comparando População...\n");
        printf("População de %s: %lu habitantes\n", cidade1, populacao1);
        printf("População de %s: %lu habitantes\n", cidade2, populacao2);

        printf("\n");
        if (populacao1 > populacao2)
        {
            printf("### Vencedor: Carta 1: %s ###\n", cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("### Vencedor: Carta 2!: %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 2: //Área
        printf("Você escolheu: Área\n");
        final1a = area1;
        final2a = area2;
        printf("Comparando Área...\n");
        printf("Área de %s: %.2f km²\n", cidade1, area1);
        printf("Área de %s: %.2f km²\n", cidade2, area2);

        printf("\n");
        if (area1 > area2)
        {
            printf("### Vencedor: Carta 1!: %s ###\n", cidade1);
        }
        else if (area1 < area2)
        {
            printf("### Vencedor: Carta 2! %s###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 3: //PIB
        printf("Você escolheu: PIB\n");
        final1a = pib1;
        final2a = pib2;
        printf("Comparando PIB...\n");
        printf("PIB de %s: R$ %.2f bilhões de reais\n", cidade1, pib1);
        printf("PIB de %s: R$ %.2f bilhões de reais\n", cidade2, pib2);

        printf("\n");
        if (pib1 > pib2)
        {
            printf("### Vencedor: Carta 1!: %s ###\n", cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 4: //Pontos turísticos
        printf("Você escolheu: Pontos turísticos\n");
        final1a = pontos_turisticos1;
        final2a = pontos_turisticos2;
        printf("Comparando Pontos turísticos...\n");
        printf("Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1);
        printf("Pontos turísticos de %s: %d\n", cidade2, pontos_turisticos2);

        printf("\n");
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 5: //Densidade populacional
        printf("Você escolheu: Densidade populacional\n");
        final1a = densidade_populacional1;
        final2a = densidade_populacional2;
        printf("Comparando Densidade populacional...\n");
        printf("Densidade populacional de %s: %.1f hab/km²\n", cidade1, densidade_populacional1);
        printf("Densidade populacional de %s: %.1f hab/km²\n", cidade2, densidade_populacional2);

        printf("\n");
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (densidade_populacional1 > densidade_populacional2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 6: //PIB per capita
        printf("Você escolheu: PIB per capita\n");
        final1a = pib_per_capta1;
        final2a = pib_per_capta2;
        printf("Comparando PIB per capita...\n");
        printf("PIB per capita de %s: R$ %.2f\n", cidade1, pib_per_capta1);
        printf("PIB per capita de %s: R$ %.2f\n", cidade2, pib_per_capta2); 

        printf("\n");
        if (pib_per_capta1 > pib_per_capta2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (pib_per_capta1 < pib_per_capta2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 7: //Superpoder
        printf("Você escolheu: Superpoder\n");
        final1a = superpoder1;
        final2a = superpoder2;
        printf("Comparando Superpoder...\n");
        printf("Superpoder de %s: %.f\n", cidade1, superpoder1);
        printf("Superpoder de %s: %.f\n", cidade2, superpoder2);

        printf("\n");
        if (superpoder1 > superpoder2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
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

    printf("------------------------------------------\n");
    printf("\n");

    //Comparação dos atributos da segunda escolha
    switch (escolha2)
    {
    case 1: //População
        printf("Você escolheu: População\n");
        final1b = populacao1;
        final2b = populacao2;
        printf("Comparando População...\n");
        printf("População de %s: %lu habitantes\n", cidade1, populacao1);
        printf("População de %s: %lu habitantes\n", cidade2, populacao2);

        printf("\n");
        if (populacao1 > populacao2)
        {
            printf("### Vencedor: Carta 1: %s ###\n", cidade1);
        }
        else if (populacao1 < populacao2)
        {
            printf("### Vencedor: Carta 2!: %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 2: //Área
        printf("Você escolheu: Área\n");
        final1b = area1;
        final2b = area2;
        printf("Comparando Área...\n");
        printf("Área de %s: %.2f km²\n", cidade1, area1);
        printf("Área de %s: %.2f km²\n", cidade2, area2);

        printf("\n");
        if (area1 > area2)
        {
            printf("### Vencedor: Carta 1!: %s ###\n", cidade1);
        }
        else if (area1 < area2)
        {
            printf("### Vencedor: Carta 2! %s###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 3: //PIB
        printf("Você escolheu: PIB\n");
        final1b = pib1;
        final2b = pib2;
        printf("Comparando PIB...\n");
        printf("PIB de %s: R$ %.2f bilhões de reais\n", cidade1, pib1);
        printf("PIB de %s: R$ %.2f bilhões de reais\n", cidade2, pib2);

        printf("\n");
        if (pib1 > pib2)
        {
            printf("### Vencedor: Carta 1!: %s ###\n", cidade1);
        }
        else if (pib1 < pib2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 4: //Pontos turísticos
        printf("Você escolheu: Pontos turísticos\n");
        final1b = pontos_turisticos1;
        final2b = pontos_turisticos2;
        printf("Comparando Pontos turísticos...\n");
        printf("Pontos turísticos de %s: %d\n", cidade1, pontos_turisticos1);
        printf("Pontos turísticos de %s: %d\n", cidade2, pontos_turisticos2);

        printf("\n");
        if (pontos_turisticos1 > pontos_turisticos2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (pontos_turisticos1 < pontos_turisticos2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 5: //Densidade populacional
        printf("Você escolheu: Densidade populacional\n");
        final1b = densidade_populacional1;
        final2b = densidade_populacional2;
        printf("Comparando Densidade populacional...\n");
        printf("Densidade populacional de %s: %.1f hab/km²\n", cidade1, densidade_populacional1);
        printf("Densidade populacional de %s: %.1f hab/km²\n", cidade2, densidade_populacional2);

        printf("\n");
        if (densidade_populacional1 < densidade_populacional2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (densidade_populacional1 > densidade_populacional2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 6: //PIB per capita
        printf("Você escolheu: PIB per capita\n");
        final1b = pib_per_capta1;
        final2b= pib_per_capta2;
        printf("Comparando PIB per capita...\n");
        printf("PIB per capita de %s: R$ %.2f\n", cidade1, pib_per_capta1);
        printf("PIB per capita de %s: R$ %.2f\n", cidade2, pib_per_capta2); 

        printf("\n");
        if (pib_per_capta1 > pib_per_capta2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (pib_per_capta1 < pib_per_capta2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
        }
        else
        {
            printf("### Empate! ###\n");
        }
        break;

    case 7: //Superpoder
        printf("Você escolheu: Superpoder\n");
        final1b = superpoder1;
        final2b = superpoder2;
        printf("Comparando Superpoder...\n");
        printf("Superpoder de %s: %.f\n", cidade1, superpoder1);
        printf("Superpoder de %s: %.f\n", cidade2, superpoder2);

        printf("\n");
        if (superpoder1 > superpoder2)
        {
            printf("### Vencedor: Carta 1! %s ###\n", cidade1);
        }
        else if (superpoder1 < superpoder2)
        {
            printf("### Vencedor: Carta 2! %s ###\n", cidade2);
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

    printf("------------------------------------------\n");
    printf("\n");

    //Soma dos atributos escolhidos
    soma_atributos1 = final1a + final1b;
    soma_atributos2 = final2a + final2b;

    printf("Soma dos atributos escolhidos: %.2f\n", soma_atributos1);

    if (soma_atributos1 > soma_atributos2)
    {
        printf("### Vencedor: Carta 1! %s ###\n", cidade1);
    }
    else if (soma_atributos1 < soma_atributos2)
    {
        printf("### Vencedor: Carta 2! %s ###\n", cidade2);
    }
    else
    {
        printf("### Empate! ###\n");
    }
    

    return 0;
}