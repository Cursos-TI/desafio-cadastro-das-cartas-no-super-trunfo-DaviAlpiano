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
    unsigned long int população1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado1);

    printf ("Digite o código da carta:\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade1);

    printf("Digite a população: \n");
    scanf("%u", &população1);

    printf("Digite a área: \n");
    scanf("%f", &area1);

    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    float densidadePopulacional1 = (float)população1/area1;
    float pibPerCapita1 = pib1/(float)população1;

    char estado2[50];
    char codigoCarta2[50];
    char cidade2[50];
    unsigned long int população2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Digite o nome do Estado: \n");
    scanf("%s", estado2);

    printf ("Digite o código da carta: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:  \n");
    scanf("%s", cidade2);

    printf("Digite a população: \n");
    scanf("%u", &população2);

    printf("Digite a área: \n");
    scanf("%f", &area2);

    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    float densidadePopulacional2 = (float)população2/area2;
    float pibPerCapita2 = pib2/(float)população2;

    float Poder1 = (float)população1 + area1 + pib1 + (float)pontosTuristicos1 - densidadePopulacional1 + pibPerCapita1;
    float Poder2 = (float)população2 + area2 + pib2 + (float)pontosTuristicos2 - densidadePopulacional2 + pibPerCapita2;

    int opcao = 0;

    while (opcao != 7)
    {
        printf("Escolha qual atributo deseja comparar: \n");
        printf("1 - Nome, ira exibir informações das cartas. \n");
        printf("2 - População. \n");
        printf("3 - Área. \n");
        printf("4 - PIB. \n");
        printf("5 - Número de pontos turísticos. \n");
        printf("6 - Densidade populacional. \n");
        printf("7 - Sair. \n");
        printf("Digite a opção desejada: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Informações da carta 1: \n");
            printf("- Estado 1: %s - Código da carta 1: %s  - Cidade 1: %s \n", estado1, codigoCarta1, cidade1);
            printf("- População 1: %u - Área 1: %.2f - PIB 1: %.2f - Pontos turísticos 1:  %d \n", população1, area1, pib1, pontosTuristicos1);
            printf("- Densidade populacional 1: %.2f - PIB per capita 1: %.2f \n", densidadePopulacional1, pibPerCapita1);
            printf("Poder da carta: %.2f \n", Poder1);
            printf("Informações da carta 2: \n");
            printf("- Estado 2: %s - Código da carta 2: %s - Cidade 2: %s \n", estado2, codigoCarta2, cidade2);
            printf("- População 2: %u  - Área 2: %.2f  - PIB 2: %.2f - Pontos turísticos 2: %d \n", população2, area2, pib2, pontosTuristicos2);
            printf("- Densidade populacional 2: %.2f - PIB per capita 2: %.2f \n", densidadePopulacional2, pibPerCapita2);
            printf("Poder da carta: %.2f \n", Poder2);
            break;
        case 2:
            printf("Comparando pela populção: \n");
            if(população1 == população2){
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("Empate! Os países tem a mesma população! \n");
            } else {
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("População vencedora é do: %s \n", população1 > população2? estado1 : estado2);
            }
            break;
        case 3:
            printf("Comparando pela área: \n");
            if(area1 == area2){
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área  do país %s é: %.2f \n", estado2, area2);
                printf("Empate! Os países tem a mesma área! \n");
            } else {
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área do país %s é: %.2f \n", estado2, area2);
                printf("Área vencedora é do: %s \n", area1 > area2? estado1 : estado2);
            }
            break;
        case 4:
            printf("Comparando pelo PIB: \n");
            if(pib1 == pib2){
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB  do país %s é: %.2f \n", estado2, pib2);
                printf("Empate! Os países tem a mesmo PIB! \n");
            } else {
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB do país %s é: %.2f \n", estado2, pib2);
                printf("PIB vencedor é do: %s \n", pib1 > pib2? estado1 : estado2);
            }
            break;
        case 5:
            printf("Comparando pelo número de pontos turísticos: \n");
            if(pontosTuristicos1 == pontosTuristicos2){
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos  do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Empate! Os países tem a mesma quantidade de pontos turísticos! \n");
            } else {
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Pontos turísticos vencedor é do: %s \n", pontosTuristicos1 > pontosTuristicos2? estado1 : estado2);
            }
            break;
        case 6:
            printf("Comparando pela densidade populacional: \n");
            if(densidadePopulacional1 == densidadePopulacional2){
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional  do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Empate! Os países tem a mesma densidade populacional! \n");
            } else {
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Densidade populacional vencedora é do: %s \n", densidadePopulacional1 < densidadePopulacional2? estado1 : estado2);
            }
            break;
        case 7:
            printf("Encerrando... \n");
            break;
    
        default:
            printf("Opção inválida! \n");
            break;
        }
    }
    

    return 0;
}
