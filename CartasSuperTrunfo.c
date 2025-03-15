#include <stdio.h>

// Estrutura para armazenar os dados das cartas
typedef struct {
    char estado[50];
    int codigo;
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional e PIB per capita
void calcular_atributos(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1 / carta->densidade_populacional);
}

// Função para ler os dados de uma carta
void ler_carta(Carta *carta) {
    printf("Digite o estado: ");
    
    

    scanf(" %[^\n]s", carta->estado);
    printf("Digite o código da carta: ");
    scanf("%d", &carta->codigo);
    printf("Digite o nome da carta: ");
    scanf(" %[^\n]s", carta->nome);
    printf("Digite a população: ");
    scanf("%lu", &carta->populacao);
    printf("Digite a área (em km²): ");
    scanf("%f", &carta->area);
    printf("Digite o PIB: ");
    scanf("%lf", &carta->pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    
    calcular_atributos(carta);
}

// Função para comparar os atributos das cartas
void comparar_cartas(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (c1.populacao > c2.populacao) ? 1 : 2, (c1.populacao > c2.populacao));
    printf("Área: Carta %d venceu (%d)\n", (c1.area > c2.area) ? 1 : 2, (c1.area > c2.area));
    printf("PIB: Carta %d venceu (%d)\n", (c1.pib > c2.pib) ? 1 : 2, (c1.pib > c2.pib));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (c1.pontos_turisticos > c2.pontos_turisticos) ? 1 : 2, (c1.pontos_turisticos > c2.pontos_turisticos));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (c1.densidade_populacional < c2.densidade_populacional) ? 1 : 2, (c1.densidade_populacional < c2.densidade_populacional));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (c1.pib_per_capita > c2.pib_per_capita) ? 1 : 2, (c1.pib_per_capita > c2.pib_per_capita));
    printf("Super Poder: Carta %d venceu (%d)\n", (c1.super_poder > c2.super_poder) ? 1 : 2, (c1.super_poder > c2.super_poder));
}

int main() {
    Carta carta1, carta2;
    
    printf("Cadastro da Carta 1:\n");
    ler_carta(&carta1);
    
    printf("\nCadastro da Carta 2:\n");
    ler_carta(&carta2);
    
    comparar_cartas(carta1, carta2);
    
    return 0;
}
