#include <stdio.h>
#include <stdlib.h>

int Max(int* array, int n);
int Min(int* array, int n);

int main(void)
{
    // Inizializzare un array di N elementi (N da input) con valori random 0 - 99.
    int n;
    printf("\nInserire lunghezza array: ");
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
    }
   
    // Creare una funzione che:
    // Trovi il massimo
    int massimo = Max(array, n);

    // Creare una funzione che:
    // Trovi il minimo 
    int minimo = Min(array, n);
    
    printf("\nIl valore massimo nell'array è: %d", massimo);
    printf("\nIl valore minimo nell'array è: %d", minimo);

    // Stampa array per controllo
    puts("\n==============================");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    puts("\n==============================");
    
    puts("");

    return 0;
}


int Max(int* array, int n)
{
    int max = 0;

    for(int i = 0; i < n; i++)
    {
        if(array[i] >= max)
        {
            max = array[i];
        }
    }
    
    return max;
}

int Min(int* array, int n)
{
    int min = 1000;

    for(int i = 0; i < n; i++)
    {
        if(array[i] <= min)
        {
            min = array[i];
        }
    }

    return min;
}   
