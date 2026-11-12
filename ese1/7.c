/*
 * Realizzare un programma che acquisisca da standard input (stdin)
 * un singolo carattere e ne mostri le diverse rappresentazioni:
 * codice decimale;
 * formato esadecimale;
 * formato binario.
 * */

#include <stdio.h>

int main(void)
{
    // Chiedo all'utente di inserire un carattere e lo memorizzo
    char car;
    printf("\nInserire un carattere: ");
    scanf("%c%*c", &car);
    
    // %c scrive il carattere
    printf("\nCarattere: %c", car);
    // %d scrive il codice ASCII
    printf("\nDecimale: %d", (int)car);
    // %X scrive il valore in formato decimale con lettere maiuscole
    // si aggiunge 02 per fermare il valore a 2 cifre.
    printf("\nEsadecimale: %02X", car);
    // %b scrive il valore in binario 
    // ATTENZIONE %b non esiste nello standard C11 che è quello che
    // il professore intende utilizzare per farci compilare tutti i programmi.
    printf("\nBinario: %b", car);
    
    puts("");

    // Nel PDF il professore specifica che possiamo utilizzare
    // le operazioni bitwise per ogni singolo bin (quindi 8 perche 1 char = 1 byte = 8 bit)
    // Utilizzando un ciclo o istruzioni multiple in questo modo
    // printf("%d", (codice >> i) & 1)

    for(int i = 7; i > 0; i--)
    {
        printf("%d", (car >> i) & 1);
    }

    puts("");

    return 0;
}
