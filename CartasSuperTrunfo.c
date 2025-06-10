#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // --- Declaração das variáveis para a Carta 1 ---
    char estado1;                  // Estado (A-H)
    char codigoCarta1[4];          // Código da Carta (Ex: A01) - 3 caracteres + 1 para o nulo
    char nomeCidade1[50];          // Nome da Cidade (tamanho máximo de 49 caracteres + 1 para o nulo)
    int populacao1;                // População
    float area1;                   // Área em km²
    float pib1;                    // PIB em bilhões de reais
    int pontosTuristicos1;         // Número de Pontos Turísticos

    // --- Declaração das variáveis para a Carta 2 ---
    char estado2;
    char codigoCarta2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // --- Coleta de dados para a Carta 1 ---
    printf("--- Insira os dados da Carta 1 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // O espaço antes de %c é para consumir qualquer caractere de nova linha pendente

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // Lê até 49 caracteres ou até encontrar uma nova linha

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Adiciona uma linha em branco para melhor legibilidade

    // --- Coleta de dados para a Carta 2 ---
    printf("--- Insira os dados da Carta 2 ---\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (Ex: A01): ");
    scanf("%s", codigoCarta2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Exibição dos dados da Carta 1 ---
    printf("\n--- Informacoes da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1); // %.2f formata para duas casas decimais
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    // --- Exibição dos dados da Carta 2 ---
    printf("\n--- Informacoes da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

#include <stdio.h>

int main() {
    // Declaração de variáveis para a Carta 1
    char estado1[3]; // 2 caracteres + \0
    char codigo1[5]; // 4 caracteres + \0
    char nomeCidade1[50];
    long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaração de variáveis para a Carta 2
    char estado2[3]; // 2 caracteres + \0
    char codigo2[5]; // 4 caracteres + \0
    char nomeCidade2[50];
    long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    // --- Leitura dos dados para a Carta 1 ---
    printf("--- Insira os dados para a Carta 1 ---\n");

    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Codigo da Carta (ex: SP01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada antes de ler a string com espaços
    scanf(" %49[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%ld", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // --- Calculos para a Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Converte bilhões para reais unitários

    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Leitura dos dados para a Carta 2 ---
    printf("--- Insira os dados para a Carta 2 ---\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Codigo da Carta (ex: RJ02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    // Limpa o buffer de entrada antes de ler a string com espaços
    scanf(" %49[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%ld", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Converte bilhões para reais unitários

    // --- Exibição dos resultados para a Carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %ld\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // --- Exibição dos resultados para a Carta 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %ld\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

int main() {
    // --- Declaração de variáveis para a Carta 1 ---
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1; // unsigned long int para população
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;
    float inversoDensidadePopulacional1;

    // --- Declaração de variáveis para a Carta 2 ---
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2; // unsigned long int para população
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;
    float inversoDensidadePopulacional2;

    // --- Leitura dos dados para a Carta 1 ---
    printf("--- Insira os dados para a Carta 1 ---\n");

    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Codigo da Carta (ex: SP01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade1); // O espaço antes do % remove o '\n' do buffer

    printf("Populacao: ");
    scanf("%lu", &populacao1); // %lu para unsigned long int

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristic1);

    // --- Calculos para a Carta 1 ---
    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0F) / populacao1; // F para float literal
    inversoDensidadePopulacional1 = 1.0F / densidadePopulacional1;
    // Soma todos os atributos numericos, convertendo para float
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0F) + (float)pontosTuristicos1 + pibPerCapita1 + inversoDensidadePopulacional1;

    printf("\n"); // Adiciona uma linha em branco para melhor visualização

    // --- Leitura dos dados para a Carta 2 ---
    printf("--- Insira os dados para a Carta 2 ---\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Codigo da Carta (ex: RJ02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", nomeCidade2); // O espaço antes do % remove o '\n' do buffer

    printf("Populacao: ");
    scanf("%lu", &populacao2); // %lu para unsigned long int

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // --- Calculos para a Carta 2 ---
    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0F) / populacao2; // F para float literal
    inversoDensidadePopulacional2 = 1.0F / densidadePopulacional2;
    // Soma todos os atributos numericos, convertendo para float
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0F) + (float)pontosTuristicos2 + pibPerCapita2 + inversoDensidadePopulacional2;

    // --- Exibição dos resultados para a Carta 1 ---
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    // --- Exibição dos resultados para a Carta 2 ---
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // --- Comparação das Cartas ---
    printf("\n--- Comparacao de Cartas ---\n");

    // População (maior vence)
    printf("Populacao: %s venceu (%d)\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2", (populacao1 > populacao2) ? 1 : 0);

    // Área (maior vence)
    printf("Area: %s venceu (%d)\n", (area1 > area2) ? "Carta 1" : "Carta 2", (area1 > area2) ? 1 : 0);

    // PIB (maior vence)
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2) ? "Carta 1" : "Carta 2", (pib1 > pib2) ? 1 : 0);

    // Pontos Turísticos (maior vence)
    printf("Pontos Turisticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Densidade Populacional (menor vence)
    printf("Densidade Populacional: %s venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2) ? "Carta 1" : "Carta 2", (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    // PIB per Capita (maior vence)
    printf("PIB per Capita: %s venceu (%d)\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2", (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    // Super Poder (maior vence)
    printf("Super Poder: %s venceu (%d)\n", (superPoder1 > superPoder2) ? "Carta 1" : "Carta 2", (superPoder1 > superPoder2) ? 1 : 0);




    return 0;
}




