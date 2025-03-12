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
    int opcao2 = 0;
    char *atributo1;
    char *atributo2;
    float atributo1Carta1 = 0;
    float atributo1Carta2 = 0;
    float atributo2Carta1 = 0;
    float atributo2Carta2 = 0;

    while (opcao2 != 6)
    {
        printf("Escolha o primeiro atributo que deseja comparar: \n");
        printf("1 - População. \n");
        printf("2 - Área. \n");
        printf("3 - PIB. \n");
        printf("4 - Número de pontos turísticos. \n");
        printf("5 - Densidade populacional. \n");
        printf("Digite a opção desejada: \n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Comparando pela populção: \n");
            if(população1 == população2){
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("Empate! Os países tem a mesma população! \n");
                atributo1Carta1 = população1;
                atributo1Carta2 = população2;
                atributo1 = "População";
            } else {
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("População vencedora é do: %s \n", população1 > população2? estado1 : estado2);
                atributo1Carta1 = população1;
                atributo1Carta2 = população2;
                atributo1 = "População";
            }
            break;
        case 2:
            printf("Comparando pela área: \n");
            if(area1 == area2){
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área  do país %s é: %.2f \n", estado2, area2);
                printf("Empate! Os países tem a mesma área! \n");
                atributo1Carta1 = area1;
                atributo1Carta2 = area2;
                atributo1 = "Área";
            } else {
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área do país %s é: %.2f \n", estado2, area2);
                printf("Área vencedora é do: %s \n", area1 > area2? estado1 : estado2);
                atributo1Carta1 = area1;
                atributo1Carta2 = area2;
                atributo1 = "Área";
            }
            break;
        case 3:
            printf("Comparando pelo PIB: \n");
            if(pib1 == pib2){
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB  do país %s é: %.2f \n", estado2, pib2);
                printf("Empate! Os países tem a mesmo PIB! \n");
                atributo1Carta1 = pib1;
                atributo1Carta2 = pib2;
                atributo1 = "PIB";
            } else {
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB do país %s é: %.2f \n", estado2, pib2);
                printf("PIB vencedor é do: %s \n", pib1 > pib2? estado1 : estado2);
                atributo1Carta1 = pib1;
                atributo1Carta2 = pib2;
                atributo1 = "PIB";
            }
            break;
        case 4:
            printf("Comparando pelo número de pontos turísticos: \n");
            if(pontosTuristicos1 == pontosTuristicos2){
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos  do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Empate! Os países tem a mesma quantidade de pontos turísticos! \n");
                atributo1Carta1 = pontosTuristicos1;
                atributo1Carta2 = pontosTuristicos2;
                atributo1 = "Pontos Turísticos";
            } else {
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Pontos turísticos vencedor é do: %s \n", pontosTuristicos1 > pontosTuristicos2? estado1 : estado2);
                atributo1Carta1 = pontosTuristicos1;
                atributo1Carta2 = pontosTuristicos2;
                atributo1 = "Pontos Turísticos";
            }
            break;
        case 5:
            printf("Comparando pela densidade populacional: \n");
            if(densidadePopulacional1 == densidadePopulacional2){
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional  do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Empate! Os países tem a mesma densidade populacional! \n");
                atributo1Carta1 = densidadePopulacional1;
                atributo1Carta2 = densidadePopulacional2;
                atributo1 = "Densidade Populacional";
            } else {
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Densidade populacional vencedora é do: %s \n", densidadePopulacional1 < densidadePopulacional2? estado1 : estado2);
                atributo1Carta1 = densidadePopulacional1;
                atributo1Carta2 = densidadePopulacional2;
                atributo1 = "Densidade Populacional";
            }
            break;
    
        default:
            printf("Opção inválida! \n");
            break;
        }

        printf("Escolha o segundo atributo diferente do primeiro que deseja comparar: \n");
        printf("1 - População. \n");
        printf("2 - Área. \n");
        printf("3 - PIB. \n");
        printf("4 - Número de pontos turísticos. \n");
        printf("5 - Densidade populacional. \n");
        printf("6 - Sair. \n");
        printf("Digite a opção desejada: \n");
        scanf("%d", &opcao2);

        if (opcao == opcao2)
        {
            printf("Opções iguais, encerrando jogo! \n");
            opcao2 = 6;
        }
        

        switch (opcao2)
        {
            case 1:
            printf("Comparando pela populção: \n");
            if(população1 == população2){
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("Empate! Os países tem a mesma população! \n");
                atributo2Carta1 = população1;
                atributo2Carta2 = população2;
                atributo2 = "População";
            } else {
                printf("População do país %s é: %u \n", estado1, população1);
                printf("População do país %s é: %u \n", estado2, população2);
                printf("População vencedora é do: %s \n", população1 > população2? estado1 : estado2);
                atributo2Carta1 = população1;
                atributo2Carta2 = população2;
                atributo2 = "População";
            }
            break;
        case 2:
            printf("Comparando pela área: \n");
            if(area1 == area2){
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área  do país %s é: %.2f \n", estado2, area2);
                printf("Empate! Os países tem a mesma área! \n");
                atributo2Carta1 = area1;
                atributo2Carta2 = area2;
                atributo2 = "Área";
            } else {
                printf("Área do país %s é: %.2f \n", estado1, area1);
                printf("Área do país %s é: %.2f \n", estado2, area2);
                printf("Área vencedora é do: %s \n", area1 > area2? estado1 : estado2);
                atributo2Carta1 = area1;
                atributo2Carta2 = area2;
                atributo2 = "Área";
            }
            break;
        case 3:
            printf("Comparando pelo PIB: \n");
            if(pib1 == pib2){
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB  do país %s é: %.2f \n", estado2, pib2);
                printf("Empate! Os países tem a mesmo PIB! \n");
                atributo2Carta1 = pib1;
                atributo2Carta2 = pib2;
                atributo2 = "PIB";
            } else {
                printf("PIB do país %s é: %.2f \n", estado1, pib1);
                printf("PIB do país %s é: %.2f \n", estado2, pib2);
                printf("PIB vencedor é do: %s \n", pib1 > pib2? estado1 : estado2);
                atributo2Carta1 = pib1;
                atributo2Carta2 = pib2;
                atributo2 = "PIB";
            }
            break;
        case 4:
            printf("Comparando pelo número de pontos turísticos: \n");
            if(pontosTuristicos1 == pontosTuristicos2){
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos  do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Empate! Os países tem a mesma quantidade de pontos turísticos! \n");
                atributo2Carta1 = pontosTuristicos1;
                atributo2Carta2 = pontosTuristicos2;
                atributo2 = "Pontos Turísticos";
            } else {
                printf("Pontos turísticos do país %s é: %d \n", estado1, pontosTuristicos1);
                printf("Pontos turísticos do país %s é: %d \n", estado2, pontosTuristicos2);
                printf("Pontos turísticos vencedor é do: %s \n", pontosTuristicos1 > pontosTuristicos2? estado1 : estado2);
                atributo2Carta1 = pontosTuristicos1;
                atributo2Carta2 = pontosTuristicos2;
                atributo2 = "Pontos Turísticos";
            }
            break;
        case 5:
            printf("Comparando pela densidade populacional: \n");
            if(densidadePopulacional1 == densidadePopulacional2){
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional  do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Empate! Os países tem a mesma densidade populacional! \n");
                atributo2Carta1 = densidadePopulacional1;
                atributo2Carta2 = densidadePopulacional2;
                atributo2 = "Densidade Populacional";
            } else {
                printf("Densidade populacional do país %s é: %.2f \n", estado1, densidadePopulacional1);
                printf("Densidade populacional do país %s é: %.2f \n", estado2, densidadePopulacional2);
                printf("Densidade populacional vencedora é do: %s \n", densidadePopulacional1 < densidadePopulacional2? estado1 : estado2);
                atributo2Carta1 = densidadePopulacional1;
                atributo2Carta2 = densidadePopulacional2;
                atributo2 = "Densidade Populacional";
            }
            break;
        case 6:
            printf("Encerrando... \n");
            break;
    
        default:
            printf("Opção inválida! \n");
            break;
        }

        if(opcao2 == 6) {
            break;
        }
        
        int somaDaCarta1 = atributo1Carta1 + atributo2Carta1;
        int somaDaCarta2 = atributo1Carta2 + atributo2Carta2;

        printf("Definindo qual carta é a vencedora! \n");
        printf("A carta vencedora é aquela com maior soma dos atributos escolhidos, %s e %s! \n", atributo1, atributo2);
        if(somaDaCarta1 == somaDaCarta2) {
            printf("Empate! \n");
        } else {
            printf("A carta vencedora é a do país: %s \n", somaDaCarta1 > somaDaCarta2? estado1 : estado2);
        }

    }
    

    return 0;
}
