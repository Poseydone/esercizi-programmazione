#include <stdio.h>
#include <stdlib.h>

int ContaElemento(int x, int* array, int n);

int main(void)
{
    // Inizializzare un array di N elementi (N da input) con valori random 0 - 99.
    int n, x;
    printf("\nInserire lunghezza array: ");
    scanf("%d", &n);
    int array[n];

    for(int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
    }

    printf("\nInserire valore di x: ");
    scanf("%d", &x);


    // Creare una funzione che:
    // dato un valore x dall'utente, restituisce numero occorrenze di x
    int occorrenze = ContaElemento(x, array, n);
    if(occorrenze == -1)
        printf("\nElemento non presente");
    else
        printf("\nElemento presente nell'array %d volte", occorrenze);
    

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


int ContaElemento(int x, int* array, int n)
{
    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if(array[i] == x)
        {
            counter++;
        }
    }

    return counter;
}
    
