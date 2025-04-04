#include <stdio.h>

int main() {
    // Declaração de variáveis das cartas

    char estado1, estado2;               
    char codigo1[10], codigo2[10];           
    char nomecidade1[50], nomecidade2[50];       
    int populacao1, populacao2;             
    float area1, area2;                
    float pib1, pib2;
    int pontoturistico1, pontoturistico2; 
   
    // Cadastro da Carta 1

    printf("Cadastro de Cartas do Super Trunfo - Carta 1:\n");
    
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo1);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade1);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao1);
    
    printf("Digite a área (em km²):\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico1);

    // Cadastro da Carta 2

    printf("\nCadastro de Cartas do Super Trunfo - Carta 2:\n");
    
    printf("Digite o estado (uma letra de A a H):\n");
    scanf(" %c", &estado2);
    
    printf("Digite o código da carta (ex: A01, B03):\n");
    scanf(" %9s", codigo2);
    
    printf("Digite o nome da cidade:\n");
    scanf(" %49[^\n]", nomecidade2);
    
    printf("Digite a população:\n");
    scanf("%d", &populacao2);
    
    printf("Digite a área (em km²):\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais):\n");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontoturistico2);

    // Exibição dos dados cadastrados

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomecidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontoturistico2);

    return 0;
}
