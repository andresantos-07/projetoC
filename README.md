#include <stdio.h>

int main()
{

    // Carta 01
    int pontos_turisticos;
    unsigned long int populacao;
    float area_em_km2;
    float pib;
    float densidade_populacional;
    float pib_per_capita;
    float superPoder;
    float inversaoDensidade;
    char estado;
    char codigo_carta[10];
    char nome_cidade[20];

    // Carta 02
    int pontos_turisticos_card2;
    unsigned long int populacao_card2;
    float area_em_km2_card2;
    float pib_card2;
    float densidade_populacional_card2;
    float pib_per_capita_card2;
    float superPoder_card2;
    float inversaoDensidade_card2;
    char estado_card2;
    char codigo_carta_card2[10];
    char nome_cidade_card2[20];

    printf("*** carta 01 ***\n\n");

    printf("Digite o nome do estado:");
    scanf("%c", &estado);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade);

    printf("Digite a populacao da cidade:");
    scanf("%lu", &populacao);

    printf("Digite a área da cidade:");
    scanf("%f", &area_em_km2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turístcos da cidade: ");
    scanf("%d", &pontos_turisticos);

    densidade_populacional = (populacao / area_em_km2);

    pib_per_capita = (populacao / pib);

    // Caúculo de Super Poder carta 01
    inversaoDensidade = 1 / densidade_populacional;

    superPoder = populacao + area_em_km2 + pib + pib_per_capita + pontos_turisticos + inversaoDensidade;

    // Impressão dos dados carta 01

    printf("O nome do estado é:%c\n", estado);

    printf("O código da carta é:%s\n", codigo_carta);

    printf("O nome da cidade é:%s\n", nome_cidade);

    printf("A população da cidade é de:%lu\n", populacao);

    printf("A área da cidade é de:%.2f km²\n", area_em_km2);

    printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib);

    printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    printf("Super Poder: %lu\n\n", superPoder);

    printf("***Carta 02*** \n\n");

    // carta 02
    printf("Digite o nome do estado:");
    scanf(" %c", &estado_card2);

    printf("Digite o código da carta:");
    scanf("%s", &codigo_carta_card2);

    printf("Digite o nome da cidade:");
    scanf("%s", &nome_cidade_card2);

    printf("Digite a populacao da cidade:");
    scanf("%lu", &populacao_card2);

    printf("Digite a área da cidade:");
    scanf("%f", &area_em_km2_card2);

    printf("Digite o PIB da cidade:");
    scanf("%f", &pib_card2);

    printf("Digite o número de pontos turístcos da cidade:");
    scanf("%d", &pontos_turisticos_card2);

    densidade_populacional_card2 = (populacao_card2 / area_em_km2_card2);

    pib_per_capita_card2 = (populacao_card2 / pib_card2);

    // Caúculo de Super Poder Carta 02
    inversaoDensidade_card2 = 1 / densidade_populacional_card2;

    superPoder_card2 = populacao_card2 + area_em_km2_card2 + pib_card2 + pib_per_capita_card2 + pontos_turisticos_card2 + inversaoDensidade_card2;

    // Impressão dos dados carta 02
    printf("O nome do estado é:%c\n", estado_card2);

    printf("O código da carta é:%s\n", codigo_carta_card2);

    printf("O nome da cidade é:%s\n", nome_cidade_card2);

    printf("A população da cidade é de:%lu\n", populacao_card2);

    printf("A área da cidade é de:%.2f km²\n", area_em_km2_card2);

    printf("O PIB da cidade é de:%.2f bilhões de reais\n", pib_card2);

    printf("A quantidade de pontos turísticos da cidade é de:%d\n", pontos_turisticos_card2);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional_card2);

    printf("PIB per Capita: %.2f reais\n", pib_per_capita_card2);

    printf("Super Poder: %lu\n\n", superPoder_card2);

    printf("*** Carta 01 versus Carta 02 ***\n\n");

    // Comparação (População carta 1 versus carta 2)
    printf("Carta 1 - %s (SP): %.3f\n", nome_cidade, (float)populacao);

    printf("Carta 2 - %s (RJ): %.3f\n\n", nome_cidade_card2, (float)populacao_card2);

    // Vencedor
    if (populacao > populacao_card2)
    {
        printf("***Carta 1 Venceu!***\n");
    }
    else
    {
        printf("***Carta 2 Venceu!***\n\n");
    }

    return 0;
}
