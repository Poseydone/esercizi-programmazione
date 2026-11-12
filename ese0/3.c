/*
 * Scrivere un programma che:
 * - Stampi a schermo il diametro, la circonferenza e l'area
 * di un cerchio di raggio pari a 2.
 *
 * - Usare il valore 3,14159 per pi greco
 * - Formule: 
 *   - Diametro: 2 * raggio;
 *   - Circonferenza: 2 * Pi * raggio;
 *   - Area: (Pi * raggio) / 2;
 * */


// Includo la libreria stdio.h che contiene printf()
#include <stdio.h>

// Entry point del programma
int main(void)
{
    // Dichiaro delle variabili di tipo float per contenere i valori
    // del diametro, circonferenza e area.
    float diametro, circonferenza, area;
    // Dichiaro e inizializzo una variabile float 
    // che contiene il raggio del cerchio
    float raggio = 2;

    // Dichiaro una variabile float e la inizializzo con il valore di pi greco
    float pi = 3.14159f;

    // Assegno alle variaibili i rispettivi valori calcolati usando
    // le formule
    diametro = 2 * raggio;
    circonferenza = 2 * pi * raggio;
    area = pi * raggio * raggio;


    // Stampo a schermo i valori calcolati
    printf("\nRaggio = %d, Pi = %f", raggio, pi);
    printf("\nDiametro = %f", diametro);
    printf("\nCirconferenza = %f", circonferenza);
    printf("\nArea = %f", area);

    puts("");


    return 0;
}
