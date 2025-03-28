#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato

int main() {
    // Declarando as varíaveis para a primeira carta
    char Estado1;
    char CodCarta1[4];
    char NomeCidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    // Cadastro da Carta 1:
    printf("Digite 'A' para determinar o Estado: ");
    Estado1 = getchar();  // Usando getchar() para capturar o caractere diretamente
    getchar(); // Captura o caractere de nova linha (\n) após o getchar() anterior

    printf("Digite 'A01' para codificar a carta: ");
    scanf("%s", CodCarta1);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da Cidade (até 50 caracteres): ");
    scanf("%[^\n]", NomeCidade1);  // Permite capturar o nome da cidade completo
    getchar(); // Limpa o buffer de entrada

    printf("Insira o número da população: ");
    scanf("%d", &Populacao1);

    printf("Insira o número da área da cidade: ");
    scanf("%f", &Area1);

    printf("Insira o número de PIB: ");
    scanf("%f", &PIB1);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos1);

    // Exibição dos Dados da Carta 1:
    printf("\nA carta 1 foi cadastrada:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", CodCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área por Km^2: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);

    // Variáveis para a segunda carta
    char Estado2;
    char CodCarta2[4];
    char NomeCidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    // Cadastro da Carta 2:
    printf("\nDigite 'B' para determinar o Estado: ");
    Estado2 = getchar();  // Usando getchar() para capturar o caractere diretamente
    getchar(); // Captura o caractere de nova linha (\n)

    printf("Digite o Código 'B02' para codificar a carta: ");
    scanf("%s", CodCarta2);
    getchar(); // Limpa o buffer de entrada

    printf("Digite o nome da Cidade (até 50 caracteres): ");
    scanf("%[^\n]", NomeCidade2);  // Permite capturar o nome da cidade completo
    getchar(); // Limpa o buffer de entrada

    printf("Insira o número da população: ");
    scanf("%d", &Populacao2);

    printf("Insira o número da área da cidade: ");
    scanf("%f", &Area2);

    printf("Insira o número de PIB: ");
    scanf("%f", &PIB2);

    printf("Insira o número de Pontos Turísticos: ");
    scanf("%d", &PontosTuristicos2);

    // Exibição dos Dados da Carta 2:
    printf("\nA carta 2 foi cadastrada:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área por Km^2: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);

    return 0;
}