#include <stdio.h>
#include <stdlib.h>

int TrovaElemento(int x, int* array, int n);

int main(void)
{
    // Inizializza array di n elementi (n dall'utente) con valori random fra 0 - 99
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
    // dato un valore x dall'utente, restituire indice della prima occorrenza di x nell'array o -1 se non c'è
    int posizione = TrovaElemento(x, array, n);
    if(posizione == -1)
        printf("\nElemento non presente");
    else
        printf("\nElemento presente nell'array in posizione %d", posizione);
    

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


int TrovaElemento(int x, int* array, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(array[i] == x)
        {
            return i;
        }
    }
    
    return -1;
}
