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

    int escolha1, escolha2, escolha3;
    int pontos1 = 0, pontos2 = 0, resultado = 0;
    int pontuação1 = 0, pontuação2 = 0, rodada = 1;

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
   printf("\n\n===== CARTAS CADASTRADAS =====\n");

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
    printf("\n\nComparação das cartas: \n");

    //oculto para adicionar menu interativo com switch, linha 177

    /*
    superpoder1 = (float) populacao1 + area1 + (PIB1*1000000000) + turisticos1 + PIBcapita1 + densidadepopul1;
    superpoder2 = (float) populacao2 + area2 + (PIB2*1000000000) + turisticos2 + PIBcapita2 + densidadepopul2;

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
*/

//menu interativo, escolha de comparação de atributos vencedor no melhor de 3, em caso de empates, rodadas até desempate
while (rodada <= 3 && pontos1 < 2 && pontos2 < 2){
printf("%s vs %s", cidade1, cidade2);
printf("\n***%dº Rodada***\n", rodada);
    printf("__Escolha qual atributo deseja comparar__\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha: ");
    scanf("%d", &escolha1);

switch (escolha1){
case 1:
    printf("Você escolheu comparar a População:\n");
   
    if (populacao1 > populacao2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);
pontos1++;} 
    else if (populacao2 > populacao1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);
pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 2:
    printf("Você escolheu comparar a Área:\n");

    if (area1 > area2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (area2 > area1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 3:
    printf("Você escolheu comparar a PIB:\n");

    if (PIB1 > PIB2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIB2 > PIB1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 4:
     printf("Você escolheu comparar a Numero de Pontos Turisticos:\n");

    if (turisticos1 > turisticos2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (turisticos2 > turisticos1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 5:
 printf("Você escolheu comparar a Densidade Populacional:\n");

    if (densidadepopul1 > densidadepopul2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (densidadepopul2 > densidadepopul1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 6:
 printf("Você escolheu comparar a PIB per Capita:\n");
 
    if (PIBcapita1 > PIBcapita2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIBcapita2 > PIBcapita1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;  

default:
        printf("Opção inválida!\n");
}
rodada++;}
printf("\nPlacar atual: Carta 1 = %d | Carta 2 = %d\n", pontos1, pontos2);
printf("\n***%dº Rodada***\n", rodada);

printf("__Escolha outro atributor para comparar__\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Número de Pontos Turisticos\n");
printf("5. Densidade Populacional\n");
printf("6. PIB per Capita\n");
printf("Escolha: \n");
scanf("%d", &escolha2);

switch (escolha2){
case 1:
    printf("Você escolheu comparar a População:\n");

    if (populacao1 > populacao2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (populacao2 > populacao1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 2:
    printf("Você escolheu comparar a Área:\n");

    if (area1 > area2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (area2 > area1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 3:
    printf("Você escolheu comparar a PIB:\n");

    if (PIB1 > PIB2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIB2 > PIB1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 4:
     printf("Você escolheu comparar a Numero de Pontos Turisticos:\n");

    if (turisticos1 > turisticos2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (turisticos2 > turisticos1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 5:
 printf("Você escolheu comparar a Densidade Populacional:\n");

    if (densidadepopul1 < densidadepopul2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (densidadepopul2 > densidadepopul1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 6:
 printf("Você escolheu comparar a PIB per Capita:\n");

    if (PIBcapita1 > PIBcapita2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIBcapita2 > PIBcapita1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;   

default:
        printf("Opção inválida!\n");
    if (pontos1 == 2 || pontos2 == 2) {
        break;}
rodada++;}

printf("\nPlacar atual: Carta 1 = %d | Carta 2 = %d\n", pontos1, pontos2);

printf("\n===== RESULTADO FINAL =====\n");
printf("Placar final: Carta 1 = %d | Carta 2 = %d\n", pontos1, pontos2);

if (pontos1 > pontos2) {
    printf("Carta 1 venceu o jogo!\n");
} 
else if (pontos2 > pontos1) {
    printf("Carta 2 venceu o jogo!\n");
} 
else {
    printf("\nEmpate geral!\n");
    printf("\n***%dº Rodada de Desempate***\n", rodada);
{

    printf("__Escolha outro atributor para comparar__\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("Escolha: \n");
    scanf("%d", &escolha3);

switch (escolha3){
case 1:
    printf("Você escolheu comparar a População:\n");

    if (populacao1 > populacao2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (populacao2 > populacao1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 2:
    printf("Você escolheu comparar a Área:\n");

    if (area1 > area2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (area2 > area1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 3:
    printf("Você escolheu comparar a PIB:\n");

    if (PIB1 > PIB2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIB2 > PIB1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 4:
     printf("Você escolheu comparar a Numero de Pontos Turisticos:\n");

    if (turisticos1 > turisticos2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (turisticos2 > turisticos1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 5:
 printf("Você escolheu comparar a Densidade Populacional:\n");

    if (densidadepopul1 < densidadepopul2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (densidadepopul2 > densidadepopul1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;

case 6:
 printf("Você escolheu comparar a PIB per Capita:\n");

    if (PIBcapita1 > PIBcapita2) {
    printf("Carta 1 venceu! Pontuação Carta 1 = %d +1\n", pontos1);pontos1++;} 
    else if (PIBcapita2 > PIBcapita1) {
    printf("Carta 2 venceu! Pontuação Carta 2 = %d +1\n", pontos2);pontos2++;} 
    else {
    printf("Empate, sem pontuação na rodada\n");}
break;   

default:
        printf("Opção inválida!\n");}
    }
}

    return 0;
}
