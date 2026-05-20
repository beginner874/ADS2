#include <stdio.h>

int contatore_bell = 0;
int n;
void calcola_partizioni(int elemento, int gruppi_usati, int insieme[]) {
    if (elemento == n) {
        contatore_bell++;
        return;
    }
    for (int i = 0; i < gruppi_usati; i++) {
        insieme[elemento] = i;
        calcola_partizioni(elemento + 1, gruppi_usati, insieme);
    }
    insieme[elemento] = gruppi_usati;
    calcola_partizioni(elemento + 1, gruppi_usati + 1, insieme);
}

int main() {
    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n)
    int insieme[n];
    insieme[0] = 0;
    calcola_partizioni(1, 1, insieme);
    printf("Il numero di Bell (partizioni totali) è: %d\n", contatore_bell);
    return 0;
}