#include <stdio.h>
// Includere funzione rand() 
#include <stdlib.h>


int main(void)
{
    // Scrivere un programm che simula il lancio di due dadi
    // il programma lancia i due dadi per 36000 volte
    // dopo ogni lancio calcola la somma dei due valori
    // calcolare la media (il valore più probabile dovrebbe essere 7)

    int tentativi = 36000; 
    int lanci[tentativi];
    int dado1, dado2, somma;
    int medio = 12/2;
    

    for(int i = 0; i < tentativi; i++)
    {
        dado1 = 1 + rand() % 6;
        dado2 = 1 + rand() % 6;
        
        lanci[i] = (dado1 + dado2); 
        if(lanci[i] > medio)
            medio++;
        else if(lanci[i] < medio)
            medio--;

// TODO: rivedere algoritmo calcolo moda, non è corretto
    }
 
    printf("\nValore medio: %d", medio);

    puts("");

    return 0;
}
