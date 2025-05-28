#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// As variáveis contendo as cartas que terão os dados preenchidos

    int opcao;

    char city_name1[50];
    char card_code1[50];
    char state1[50];
    int poi_qty1;
    int popul1;
    float areaKm1;
    float pib1;
    float pibpc1;
    float densipopul1;
    float superpoder1;


    char city_name2[50];
    char card_code2[50];
    char state2[50];
    int poi_qty2;
    int popul2;
    float areaKm2;
    float pib2;
    float pibpc2;
    float densipopul2;
    float superpoder2;

//Começando o jogo:

// Exibindo as cartas cadastradas abaixo.
// Carta 1:



    printf("Carta 1:\nEstado: (ex: SP)\n");
    scanf("%s", state1);

    printf("Código da carta: (ex: A01)\n");
    scanf("%s", card_code1);

    printf("Nome da Cidade: (ex: SAOPAULO)\n");
    scanf("%s", city_name1);

    printf("População: (ex: 12325000)\n");
    scanf("%d", &popul1);

    printf("Área: (ex: 1521.11)\n");
    scanf("%f", &areaKm1);

    printf("PIB: (ex: R$ 699.28 bilhões)\n");
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: (ex: 50)\n");
    scanf("%d", &poi_qty1);

    printf("Densidade Populacional: %.2f\n", densipopul1 = popul1 / (float) areaKm1);

    printf("PIB per Capita: %.2f\n", pibpc1 = pib1 / (float) popul1);

// Carta 2:

    printf("\nCarta 2:\nEstado: (ex: RJ)\n");
    scanf("%s", state2);

    printf("Código da carta: (ex: B02)\n");
    scanf("%s", card_code2);
    
    printf("Nome da Cidade: (RIODEJANEIRO)\n");
    scanf("%s", city_name2);

    printf("População: (ex: 6748000)\n");
    scanf("%d", &popul2);

    printf("Área: (ex: 1200.25)\n");
    scanf("%.2f", &areaKm2);

    printf("PIB: (ex: R$ 300.50 bilhões)\n");
    scanf("%.2f", &pib2);

    printf("Número de Pontos Turísticos: (ex: 30)\n");
    scanf("%d", &poi_qty2);


    printf("Densidade Populacional: %.2f\n", densipopul2 = popul2 / 1200.25);

    printf("PIB per Capita: %.2f\n", pibpc2 = 300500000000 / (float) popul2);

    
    superpoder1 = popul1 + areaKm1 + pib1 + pibpc1 + (1/densipopul1) + (float) poi_qty1;
    
    superpoder2 = popul2 + areaKm2 + pib2 + pibpc2 + (1/densipopul2) + (float) poi_qty2;

//Comparação das cartas:

    printf("\nOpções para comparar os atributos: \n");
    printf("1. População\n2. Área de tamanho\n3. PIB\n4. Números de pontos turísticos\n5. Densidade populacional\n6. Super Poder\n");
    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("Comparando: População\nCarta 1: %s - %u | Carta 2: %s - %u\n", city_name1, popul1, city_name2, popul2);
        if (popul1 > popul2) {
            printf("Carta 1 venceu!\n");
        } else if (popul1 == popul2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }
        
        break;

    case 2:
        printf("Comparando: Área de tamanho\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, areaKm1, city_name2, areaKm2);
        if (areaKm1 > areaKm2) {
            printf("Carta 1 venceu!\n");
        } else if (areaKm1 == areaKm2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }
        
        break;

    case 3:
        printf("Comparando: PIB\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, pib1, city_name2, pib2);
        if (pib1 > pib2) {
            printf("Carta 1 venceu!\n");
        } else if (pib1 == pib2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

        break;

    case 4:
        printf("Comparando: Números de pontos turísticos\nCarta 1: %s - %d | Carta 2: %s - %d\n", city_name1, poi_qty1, city_name2, poi_qty2);
        if (poi_qty1 > poi_qty2) {
            printf("Carta 1 venceu!\n");
        } else if (poi_qty1 == poi_qty2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }
        break;

    case 5:
        printf("Comparando: Densidade populacional (quanto menor for, melhor)\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, densipopul1, city_name2, densipopul2);
        if (densipopul1 < densipopul2) {
            printf("Carta 1 venceu!\n");
        } else if (densipopul1 == densipopul2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

        break;
    
        case 6:
        printf("Comparando: Super Poder\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, superpoder1, city_name2, superpoder2);
        if (superpoder1 > superpoder2) {
            printf("Carta 1 venceu definitivamente!\n");
        } else if (superpoder1 == superpoder2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu definitivamente!\n");
        }

        break;
    default:
        printf("Opção inválida. Tente o processo novamente.\n");
        break;
    }

    return 0;
}
