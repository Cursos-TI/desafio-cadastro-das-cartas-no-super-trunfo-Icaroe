#include <stdio.h>

typedef struct {
    char codigo[4];           // ex: A01, B02 (3 chars + '\0')
    int populacao;            // População
    float area;               // Área (km²)
    float pib;                // PIB (em bilhões, por exemplo)
    int pontosTuristicos;     // Nº de pontos turísticos
} Carta;

int main(void) {
    Carta c1, c2;

    // --- Cadastro da Carta 1 ---
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Codigo (ex: A01): ");
    scanf(" %3s", c1.codigo);

    printf("Populacao: ");
    scanf("%d", &c1.populacao);

    printf("Area (km2): ");
    scanf("%f", &c1.area);

    printf("PIB: ");
    scanf("%f", &c1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c1.pontosTuristicos);

    // --- Cadastro da Carta 2 ---
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Codigo (ex: B02): ");
    scanf(" %3s", c2.codigo);

    printf("Populacao: ");
    scanf("%d", &c2.populacao);

    printf("Area (km2): ");
    scanf("%f", &c2.area);

    printf("PIB: ");
    scanf("%f", &c2.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &c2.pontosTuristicos);

    // --- Exibicao dos dados ---
    printf("\n========== DADOS CADASTRADOS ==========\n");

    printf("\n--- Carta 1 (%s) ---\n", c1.codigo);
    printf("Populacao: %d\n", c1.populacao);
    printf("Area (km2): %.2f\n", c1.area);
    printf("PIB: %.2f\n", c1.pib);
    printf("Pontos turisticos: %d\n", c1.pontosTuristicos);

    printf("\n--- Carta 2 (%s) ---\n", c2.codigo);
    printf("Populacao: %d\n", c2.populacao);
    printf("Area (km2): %.2f\n", c2.area);
    printf("PIB: %.2f\n", c2.pib);
    printf("Pontos turisticos: %d\n", c2.pontosTuristicos);

    return 0;
}
