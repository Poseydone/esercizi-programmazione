#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Voti interi intervallo 0 - 100
    // Voti salvati in un array
    // Inizializzare array con valori random, rand()
    
    // Calcolare la media dei voti 
    // Contare e visualizzare il numero di studenti promossi (voto >= 50)
    
    // Variabili
    int studenti = 10;
    int voti[studenti];
    
    // Inizializzare con valori random
    for(int i = 0; i < studenti; i++)
    {
        voti[i] = 1 + (rand() % 100);
    }
    
    // Calcolare la media
    int somma = 0;
    int promossi = 0;

    puts("\n======================================"); 

    for(int i = 0; i < studenti; i++)
    {
        printf("%d ", voti[i]);
        somma += voti[i];    
        if(voti[i] >= 50)
            promossi++;
    }

    puts("\n======================================"); 

    printf("La media è: %.2f", (float)somma / (float)studenti);
    printf("\nIl numero di studenti promossi è: %d", promossi);

    puts("");
    
    return 0;
}
