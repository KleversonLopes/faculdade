#include <stdio.h>

int main(void){
    // carta 1
    char Carta1_Estado;
    char Carta1_Codigo_da_carta[4];
    char Carta1_Nome_da_cidade[51];
    int Carta1_Populacao;
    float Carta1_Area;
    float Carta1_PIB;
    int Carta1_Numero_de_pontos_turisticos;

    // carta 2
    char Carta2_Estado;
    char Carta2_Codigo_da_carta[4];
    char Carta2_Nome_da_cidade[51];
    int Carta2_Populacao;
    float Carta2_Area;
    float Carta2_PIB;
    int Carta2_Numero_de_pontos_turisticos;

    // Entrada de dados da carta 1
    printf("Digite os dados da carta1\n");
    printf("Estado - Uma letra de 'A' a 'H' :");
    scanf(" %c", &Carta1_Estado);
    printf("Código - A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) :");
    scanf("%3s", &Carta1_Codigo_da_carta);
    printf("Nome da cidade - Até 50 letras :");
    scanf("%50s", &Carta1_Nome_da_cidade);
    printf("População - O número de habitantes da cidade :");
    scanf("%d", &Carta1_Populacao);
    printf("Área da cidade (em km²) :");
    scanf("%f", &Carta1_Area);
    printf("PIB - O Produto Interno Bruto da cidade :");
    scanf("%f", &Carta1_PIB);
    printf("Número de Pontos Turísticos da cidade :");
    scanf("%d", &Carta1_Numero_de_pontos_turisticos);

    // Entrada de dados da carta 2
    printf("\n\nDigite os dados da carta2\n");
    printf("Estado - Uma letra de 'A' a 'H' :");
    scanf(" %c", &Carta2_Estado);
    printf("Código - A letra do estado seguida de um número de 01 a 04 (ex: A01, B03) :");
    scanf("%3s", &Carta2_Codigo_da_carta);
    printf("Nome da cidade - Até 50 letras :");
    scanf("%50s", &Carta2_Nome_da_cidade);
    printf("População - O número de habitantes da cidade :");
    scanf("%d", &Carta2_Populacao);
    printf("Área da cidade (em km²) :");
    scanf("%f", &Carta2_Area);
    printf("PIB - O Produto Interno Bruto da cidade :");
    scanf("%f", &Carta2_PIB);
    printf("Número de Pontos Turísticos da cidade :");
    scanf("%d", &Carta2_Numero_de_pontos_turisticos);

    // Saída de dados da carta 1
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", Carta1_Estado);
    printf("Código: %s\n", Carta1_Codigo_da_carta);
    printf("Nome da Cidade: %s\n", Carta1_Nome_da_cidade);
    printf("População: %d\n", Carta1_Populacao);
    printf("Área: %.2f km²\n", Carta1_Area);
    printf("PIB: %.2f bilhões de reais\n", Carta1_PIB);
    printf("Número de Pontos Turísticos: %d\n", Carta1_Numero_de_pontos_turisticos);

    // Saída de dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Carta2_Estado);
    printf("Código: %s\n", Carta2_Codigo_da_carta);
    printf("Nome da Cidade: %s\n", Carta2_Nome_da_cidade);
    printf("População: %d\n", Carta2_Populacao);
    printf("Área: %.2f km²\n", Carta2_Area);
    printf("PIB: %.2f bilhões de reais\n", Carta2_PIB);
    printf("Número de Pontos Turísticos: %d\n", Carta2_Numero_de_pontos_turisticos);
}