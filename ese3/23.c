#include <stdio.h>
#include <stdlib.h>

void RimuoviX(int x, int* array, int N);

int main(void)
{
    int N;
    printf("\nInserire lunghezza array: ");
    scanf("%d", &N);

    
    // Inizializzare un array di N elementi (N da input)
    // con elementi random (0 - 9)
    int array[N]; 
    for(int i = 0; i < N; i++)
    {
        array[i] = rand() % 10;
        printf("%d ", array[i]);
    }

    // Implementare funzione che dato un valore X
    // elimini ogni occorrenza di X dall'array, spostando gli elementi successivi
    // a sinistra e rimpiazzi gli spazi vuoti con 0
    int X;
    printf("\nInserire valore da rimuovere: ");
    scanf("%d", &X);

    RimuoviX(X, array, N);
    
    puts("\nNuovo array:");
    for(int i = 0; i < N; i++)
    {
        printf("%d ", array[i]);
    }

    puts("");
    puts("");

    return 0;
}

void RimuoviX(int x, int* array, int N)
{
    for(int i = 0; i < N; i++)
    {
        if(array[i] == x)
        {
            // Rimuovi x
            for(int j = i; j < N; j++)
            {
                if(j+1 < N)
                    array[j] = array[j+1];
                else
                    array[j] = 0;
            }
            
        }
    }
}
