#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
// As variáveis contendo as cartas que terão os dados preenchidos


    char city_name1[50] = "São Paulo";
    char card_code1[50] = "A01";
    char state1[50] = "A";
    int poi_qty1 = 50;
    int popul1 = 12325000;
    float areaKm1 = 1521.11;
    float pib1 = 699.28;
    float pibpc1;
    float densipopul1;
    float superpoder1;


    char city_name2[50] = "Rio de Janeiro";
    char card_code2[50] = "B02";
    char state2[50] = "B";
    int poi_qty2 = 30;
    int popul2 = 6748000;
    float areaKm2 = 1200.25;
    float pib2 = 300.50;
    float pibpc2;
    float densipopul2;
    float superpoder2;

//Começando o jogo:

// Exibindo as cartas cadastradas abaixo.
// Carta 1:



    printf("Carta 1:\nEstado: %s\n", state1);

    printf("Código da carta: %s\n", card_code1);

    printf("Nome da Cidade: %s\n", city_name1);

    printf("População: %d\n", popul1);

    printf("Área: %.2f\n", areaKm1);

    printf("PIB: R$%.2f Bilhões\n", pib1);
    
    printf("Número de Pontos Turísticos: %d\n", poi_qty1);

    printf("Densidade Populacional: %.2f hab/km²\n", densipopul1 = popul1 / (float) areaKm1);

    printf("PIB per Capita: R$%.2f\n", pibpc1 = pib1 / (float) popul1);

// Carta 2:

    printf("\nCarta 2:\nEstado: %s\n", state2);

    printf("Código da carta: %s\n", card_code2);
    
    printf("Nome da Cidade: %s\n", city_name2);

    printf("População: %d\n", popul2);

    printf("Área: %.2f\n", areaKm2);

    printf("PIB: R$%.2f Bilhões\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", poi_qty2);


    printf("Densidade Populacional: %.2f hab/km²\n", densipopul2 = popul2 / 1200.25);

    printf("PIB per Capita: R$%.2f\n", pibpc2 = 300500000000 / (float) popul2);

    
    superpoder1 = popul1 + areaKm1 + pib1 + pibpc1 + (1/densipopul1) + (float) poi_qty1;
    
    superpoder2 = popul2 + areaKm2 + pib2 + pibpc2 + (1/densipopul2) + (float) poi_qty2;

//Comparação das cartas:

    printf("\n----------------------------------------------------------------------------\n");
    printf("\nComparando: População\nCarta 1: %s - %u | Carta 2: %s - %u\n", city_name1, popul1, city_name2, popul2);
        if (popul1 > popul2) {
            printf("Carta 1 venceu!\n");
        } else if (popul1 == popul2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

    printf("Comparando: Área de tamanho\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, areaKm1, city_name2, areaKm2);
        if (areaKm1 > areaKm2) {
            printf("Carta 1 venceu!\n");
        } else if (areaKm1 == areaKm2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

    printf("Comparando: PIB\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, pib1, city_name2, pib2);
        if (pib1 > pib2) {
            printf("Carta 1 venceu!\n");
        } else if (pib1 == pib2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

    printf("Comparando: Números de pontos turísticos\nCarta 1: %s - %d | Carta 2: %s - %d\n", city_name1, poi_qty1, city_name2, poi_qty2);
        if (poi_qty1 > poi_qty2) {
            printf("Carta 1 venceu!\n");
        } else if (poi_qty1 == poi_qty2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

    printf("Comparando: Densidade populacional (quanto menor for, melhor)\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, densipopul1, city_name2, densipopul2);
        if (densipopul1 < densipopul2) {
            printf("Carta 1 venceu!\n");
        } else if (densipopul1 == densipopul2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu!\n");
        }

    printf("Comparando: Super Poder\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, superpoder1, city_name2, superpoder2);
        if (superpoder1 > superpoder2) {
            printf("Carta 1 venceu definitivamente!\n");
        } else if (superpoder1 == superpoder2) {
            printf("Empate!\n");
        } else{
            printf("Carta 2 venceu definitivamente!\n");
        }


    // printf("\nOpções para comparar os atributos: \n");
    // printf("1. População\n2. Área de tamanho\n3. PIB\n4. Números de pontos turísticos\n5. Densidade populacional\n6. Super Poder\n");
    // scanf("%d", &opcao);
    // switch (opcao) {
    // case 1:
    //     printf("Comparando: População\nCarta 1: %s - %u | Carta 2: %s - %u\n", city_name1, popul1, city_name2, popul2);
    //     if (popul1 > popul2) {
    //         printf("Carta 1 venceu!\n");
    //     } else if (popul1 == popul2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu!\n");
    //     }
        
    //     break;

    // case 2:
    //     printf("Comparando: Área de tamanho\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, areaKm1, city_name2, areaKm2);
    //     if (areaKm1 > areaKm2) {
    //         printf("Carta 1 venceu!\n");
    //     } else if (areaKm1 == areaKm2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu!\n");
    //     }
        
    //     break;

    // case 3:
    //     printf("Comparando: PIB\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, pib1, city_name2, pib2);
    //     if (pib1 > pib2) {
    //         printf("Carta 1 venceu!\n");
    //     } else if (pib1 == pib2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu!\n");
    //     }

    //     break;

    // case 4:
    //     printf("Comparando: Números de pontos turísticos\nCarta 1: %s - %d | Carta 2: %s - %d\n", city_name1, poi_qty1, city_name2, poi_qty2);
    //     if (poi_qty1 > poi_qty2) {
    //         printf("Carta 1 venceu!\n");
    //     } else if (poi_qty1 == poi_qty2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu!\n");
    //     }
    //     break;

    // case 5:
    //     printf("Comparando: Densidade populacional (quanto menor for, melhor)\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, densipopul1, city_name2, densipopul2);
    //     if (densipopul1 < densipopul2) {
    //         printf("Carta 1 venceu!\n");
    //     } else if (densipopul1 == densipopul2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu!\n");
    //     }

    //     break;
    
    //     case 6:
    //     printf("Comparando: Super Poder\nCarta 1: %s - %.2f | Carta 2: %s - %.2f\n", city_name1, superpoder1, city_name2, superpoder2);
    //     if (superpoder1 > superpoder2) {
    //         printf("Carta 1 venceu definitivamente!\n");
    //     } else if (superpoder1 == superpoder2) {
    //         printf("Empate!\n");
    //     } else{
    //         printf("Carta 2 venceu definitivamente!\n");
    //     }

    //     break;
    // default:
    //     printf("Opção inválida. Tente o processo novamente.\n");
    //     break;
    // }

    return 0;
}
