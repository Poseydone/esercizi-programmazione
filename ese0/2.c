/*
 * Scrivere un programma che:
 * - Legga da tastiera un carattere inserito dall'utente
 * - Visualizzi a schermo il codice numerico ASCII corrispondente
 * - Calcoli e stampi tre trasformazioni basate su quel codice numerico
 *   - Valore successivo (codice + 1)
 *   - Valore precedente (codice - 1)
 *   - Valore raddoppiato (codice * 2)
 * */

// Includo la libreria stdio.h che contiene printf() e scanf()
#include <stdio.h>

// Entry point
int main(void)
{
    // Dichiaro una variabile di tipo char che conterrà il carattere
    // immesso dall'utente
    char car;

    // Richiedo all'utente di inserire un carattere ASCII
    printf("\nInserire carattere ASCII: ");
    scanf("%c", &car);
    
    // Dichiaro e inizializzo una variabile di tipo int
    // con il valore intero del carattere.
    // Questa operazione si chiama "casting" di una variabile.
    // Cioè convertire esplicitamente una variabile in un'altra.
    int codice = (int)car;

    // Mostro il codice del carattere
    printf("\nCodice ASCII di %c: %d", car, car);

    // Calcolo e mostro le 3 trasformazioni e i caratteri corrispondenti
    printf("\nValore successivo: %d --> Carattere: %c", codice + 1, (char)(codice + 1));
    printf("\nValore precedente: %d --> Carattere: %c", codice - 1, (char)(codice - 1));
    printf("\nValore raddoppiato: %d --> Carattere: %c", codice * 2, (char)(codice * 2));

    // puts() aggiunge un carattere di newline (\n) alla fine della stringa
    // Equivalente a: printf("\n");
    puts("");

    return 0;
}
