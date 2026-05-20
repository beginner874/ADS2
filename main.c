#include <stdio.h>

int contatore_bell = 0;
int n;
void calcola_partizioni(int elemento, int gruppo, int insieme[]) {
    if (elemento == n) {
        contatore_bell++;
        return;
    }
    for (int i = 0; i < gruppo; i++) {
        insieme[elemento] = i;
        calcola_partizioni(elemento + 1, gruppo, insieme);
    }
    insieme[elemento] = gruppo;
    calcola_partizioni(elemento + 1, gruppo + 1, insieme);
}

int main() {
    printf("Inserisci il numero di elementi: ");
    scanf("%d", &n)
    int insieme[n];
    insieme[0] = 0;
    calcola_partizioni(1, 1, insieme);
    printf("Il numero di Bell : %d\n", contatore_bell);
    return 0;
}