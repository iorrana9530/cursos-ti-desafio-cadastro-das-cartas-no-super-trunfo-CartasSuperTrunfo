#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

//Teste IORRANA VIEGAS
#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira 
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
      // Entrada de dados para a primeira carta
      printf("Digite o estado da primeira carta (A-H): ");
      scanf(" %c", &estado1);
      printf("Digite o código da primeira carta (ex: A01): ");
      scanf(" %s", codigo1);
      printf("Digite o nome da cidade: ");
      scanf(" %[^\n]", cidade1);
      printf("Digite a população da cidade: ");
      scanf(" %d", &populacao1);
      printf("Digite a área da cidade (em km²): ");
      scanf(" %f", &area1);
      printf("Digite o PIB da cidade (em bilhões de reais): ");
      scanf(" %f", &pib1);
      printf("Digite o número de pontos turísticos: ");
      scanf(" %d", &pontosTuristicos1);

      // Cálculo da Densidade Populacional e PIB per capita da primeira carta
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;


    // Entrada de dados para a segunda carta
    printf("\nDigite o estado da segunda carta (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da segunda carta (ex: A01): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (em km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo da Densidade Populacional e PIB per capita da segunda carta
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2; 


    // Exibição dos dados da primeira carta
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões de reais\n", pib1);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
   printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);


 // Exibição dos dados da segunda carta
 printf("\nCarta 2:\n");
 printf("Estado: %c\n", estado2);
 printf("Código: %s\n", codigo2);
 printf("Nome da Cidade: %s\n", cidade2);
 printf("População: %d\n", populacao2);
 printf("Área: %.2f km²\n", area2);
 printf("PIB: %.2f bilhões de reais\n", pib2);
 printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
 printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);


 return 0;
}