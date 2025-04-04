#include <stdio.h>

int main() {
    // Variáveis das cartas
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; // em bilhões
    int pontoturistico1, pontoturistico2;

    // Cálculos
    float densidade1 = 0, densidade2 = 0;
    float pibpercapita1 = 0, pibpercapita2 = 0;
    float superpoder1 = 0, superpoder2 = 0;

    // Entrada - Carta 1
    printf("Cadastro de Cartas do Super Trunfo - Carta 1:\n");
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo1);
    getchar(); // Limpar buffer
    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade1);
    printf("Digite a população:\n");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico1);

    // Entrada - Carta 2
    printf("\nCadastro de Cartas do Super Trunfo - Carta 2:\n");
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo2);
    getchar(); // Limpar buffer
    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade2);
    printf("Digite a população:\n");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    // Verificação de áreas válidas
    if (area1 == 0 || area2 == 0) {
        printf("Erro: A área de uma das cidades é zero. Não é possível calcular densidade.\n");
        return 1;
    }

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibpercapita1 = (pib1 * 1000000000) / populacao1;
    pibpercapita2 = (pib2 * 1000000000) / populacao2;

    superpoder1 = populacao1 + area1 + pib1 + pontoturistico1 + pibpercapita1 + (1 / densidade1);
    superpoder2 = populacao2 + area2 + pib2 + pontoturistico2 + pibpercapita2 + (1 / densidade2);

    // Exibição das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: %s\n", (populacao1 > populacao2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Área: %s\n", (area1 > area2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("PIB: %s\n", (pib1 > pib2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Pontos Turísticos: %s\n", (pontoturistico1 > pontoturistico2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Densidade Populacional: %s\n", (densidade1 < densidade2) ? "Carta 1 venceu (menor densidade)" : "Carta 2 venceu (menor densidade)");
    printf("PIB per Capita: %s\n", (pibpercapita1 > pibpercapita2) ? "Carta 1 venceu" : "Carta 2 venceu");
    printf("Super Poder: %s\n", (superpoder1 > superpoder2) ? "Carta 1 venceu" : "Carta 2 venceu");

    return 0;
}
