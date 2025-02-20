#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    char estado1[20];
    char codigoCarta1[20];
    char cidade1[20];
    int população1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf ("Digite o código da carta:\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%d", &população1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);


    char estado2[50];
    char codigoCarta2[50];
    char cidade2[50];
    int população2;
    float  area2;
    float pib2;
    int pontosTuristicos2;

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf ("Digite o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%d", &população2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    printf("- Estado 1: %s - Código da carta 1: %s  - Cidade 1: %s \n", estado1, codigoCarta1, cidade1);
    printf("- População 1: %d - Área 1: %.2f - PIB 1: %.2f - Pontos turísticos 1:  %d \n", população1, area1, pib1, pontosTuristicos1);

    printf("- Estado 2: %s - Código da carta 2: %s - Cidade 2: %s \n", estado2, codigoCarta2, cidade2);
    printf("- População 2: %d  - Área 2: %.2f  - PIB 2: %.2f - Pontos turísticos 2: %d \n", população2, area2, pib2, pontosTuristicos2);


    return 0;
}
