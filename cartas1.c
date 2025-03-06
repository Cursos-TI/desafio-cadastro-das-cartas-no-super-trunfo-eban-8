#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    
    printf("Informe os dados da primeira carta:\n");
    scanf(" %c", &estado1);
    scanf(" %s", codigo1);
    scanf(" %[^\n]", nomeCidade1);
    scanf(" %d", &populacao1);
    scanf(" %f", &area1);
    scanf(" %f", &pib1);
    scanf(" %d", &pontosTuristicos1);
    
    printf("\nInforme os dados da segunda carta:\n");
    scanf(" %c", &estado2);
    scanf(" %s", codigo2);
    scanf(" %[^\n]", nomeCidade2);
    scanf(" %d", &populacao2);
    scanf(" %f", &area2);
    scanf(" %f", &pib2);
    scanf(" %d", &pontosTuristicos2);
    
    printf("\nCarta 1:\n");
    printf("%c\n", estado1);
    printf("%s\n", codigo1);
    printf("%s\n", nomeCidade1);
    printf("%d\n", populacao1);
    printf("%.2f km²\n", area1);
    printf("%.2f bilhões de reais\n", pib1);
    printf("%d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("%c\n", estado2);
    printf("%s\n", codigo2);
    printf("%s\n", nomeCidade2);
    printf("%d\n", populacao2);
    printf("%.2f km²\n", area2);
    printf("%.2f bilhões de reais\n", pib2);
    printf("%d\n", pontosTuristicos2);
    
    return 0;
}