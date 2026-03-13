#include <stdio.h>
// Desafio Super Trunfo - Países

int main() {

// Definição das variáveis para armazenar as propriedades das cidades
     int carta1;
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int turisticos1;
    float densidadepopul1;
    float PIBcapita1;
    float superpoder1;
    
    int carta2;
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int turisticos2;
    float densidadepopul2;
    float PIBcapita2;
    float superpoder2;
    

 // Cadastro das Cartas:
    printf("\n === Carta 1 ===\n");

    printf("Estado: ");
    scanf("%c", &estado1);

    printf("Código: ");
    scanf("%s", codigo1);

while (getchar() != '\n'); 

    printf("Nome da Cidade: ");
    fgets(cidade1, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de Ponto Turísticos: ");
    scanf("%d", &turisticos1);

    densidadepopul1 = populacao1/area1;
    printf("Densidade Populacional: %.2f\n", densidadepopul1);

    PIBcapita1 = (PIB1*1000000000)/populacao1;
    printf("PIB per Capita: %.2f\n", PIBcapita1);


    printf("\n=== Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2); 

    printf("Código: ");
    scanf("%s", codigo2);

while (getchar() != '\n'); 

    printf("Nome da Cidade: ");
    fgets(cidade2, 50, stdin);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Ponto Turísticos: ");
    scanf("%d", &turisticos2);
    
    densidadepopul2 = populacao2/area2;
    printf("Densidade Populacional: %.2f\n", densidadepopul2);

    PIBcapita2 = (PIB2*1000000000)/populacao2;
    printf("PIB per Capita: %f\n", PIBcapita2);


 // Exibição das Cartas:
   printf("\n\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1 (%s):", cidade1); //não sei como remover esse espaço extra no final do nome da cidade
    printf("Estado: %c\n", estado1);
    printf("Codigo: %2s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul1);
    printf("Pib per Capita: %.2f reais\n", PIBcapita1);

    printf("\nCarta 2 (%s):", cidade2); //não sei como remover esse espaço extra no final do nome da cidade
    printf("Estado: %c\n", estado2);
    printf("Codigo: %2s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopul2);
    printf("Pib per Capita: %.2f reais\n", PIBcapita2);

 // Exibição dos Resultados:
    printf("\n\n===Super Poder===\n\n");
    superpoder1 = (float) populacao1 + area1 + (PIB1*1000000000) + turisticos1 + PIBcapita1 + densidadepopul1;
    superpoder2 = (float) populacao2 + area2 + (PIB2*1000000000) + turisticos2 + PIBcapita2 + densidadepopul2;

    printf("Comparação das cartas: \n");

    int comparapopul1 = populacao1 > populacao2;
    if (populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n\n");
    } else {
        printf("População: Carta 2 venceu!\n\n");}

    int comparaarea1 = area1 > area2;
    if (area1 > area2){
        printf("Área: Carta 1 venceu!\n\n");
    } else {
        printf("Área: Carta 2 venceu!\n\n");}

    int comparaPIB1 = PIB1 > PIB2;
    if (PIB1 > PIB2){
        printf("PIB: Carta 1 venceu!\n\n");
    } else {
        printf("PIB: Carta 2 venceu!\n\n");}

    int comparaturis1 = turisticos1 > turisticos2;
    if (turisticos1 > turisticos2){
        printf("Pontos Turisticos: Carta 1 venceu!\n\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu!\n\n");}

    int comparadensid1 = densidadepopul1 < densidadepopul2;
    if (densidadepopul1 < densidadepopul2){
        printf("Densidade Populacional: Carta 1 venceu!\n\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n\n");}

    int comparaPIBcap1 = PIBcapita1 > PIBcapita2;
    if (PIBcapita1 > PIBcapita2){
        printf("PIB per Capita: Carta 1 venceu!\n\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu!\n\n");}

    int comparasuperpoder = superpoder1 > superpoder2;
    if (superpoder1 > superpoder2){
        printf("Super Poder: Carta 1 venceu!\n\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n\n");}

    return 0;
}
