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

    char estado[20], estado2[20];
    //strcpy(estado, "Algo"); "%s"
    char codigoCarta[4], codigoCarta2[4], nomeCidade[30], nomeCidade2[30];

    int populacao, populacao2, numeroPontosTuristicos, numeroPontosTuristicos2;
    //populacao = 20; "%d"
    float areaKm, areaKm2, PIB, PIB2;
    //areaKm = 2.20;"%.2f"

    //entrada carta 1
    printf("CARTA 1: \n");
    printf("Digite o estado: ");
    fgets(estado, 20, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("Digite o código da carta: ");
    fgets(codigoCarta, 20, stdin);
    codigoCarta[strcspn(codigoCarta, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade, 20, stdin);
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área KM²: ");
    scanf("%f", &areaKm);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos);
    getchar();
    //entrada carta 2;
    printf("\nCARTA 2: \n");
    printf("Digite o estado: ");
    fgets(estado2, 20, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("Digite o código da carta: ");
    fgets(codigoCarta2, 20, stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, 20, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área KM²: ");
    scanf("%f", &areaKm2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &numeroPontosTuristicos2);


    printf("CARTA 1: \n");
    printf("\nEstado: %s \n", estado);
    printf("Codigo: %s \n", codigoCarta);
    printf("Nome da cidade: %s \n", nomeCidade);
    printf("População: %d \n", populacao);
    printf("Área: %.2f km² \n", areaKm);
    printf("PIB: %.2f bilhões de reais \n", PIB);
    printf("Número de pontos turísticos: %d \n", numeroPontosTuristicos);

    printf("CARTA 2: \n");
    printf("\nEstado: %s \n", estado2);
    printf("Codigo: %s \n", codigoCarta2);
    printf("Nome da cidade: %s \n", nomeCidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", areaKm2);
    printf("PIB: %.2f bilhões de reais \n", PIB2);
    printf("Número de pontos turísticos: %d \n", numeroPontosTuristicos2);
    return 0;
}
