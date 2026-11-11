/*
    
    - Tutti gli esercizi vanno risolti scrivendo l'intero programma nella funzione "main", senza definire altre funzioni.
    - Usare vettori statici con una dimensione massima fissata, ad esempio "#define MAX 100"
      e controllate che la dimensione N inserita dall'utente sia compresa fra 1 e MAX.
    - Quando i valori sono casuali, inizializzate il generatore una sola volta con "srand(time(NULL));".
    - Compilate con "gcc -Wall -Wextra -std=c11 file.c -o file" e coreggete tutti gli avvisi;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Dichiarare un array di N elementi (N da input)
    printf("\nInserire lunghezza array: "); 
    scanf("%d", &N);
    int vet[N]; 
    
    srand(time(NULL));

    // Inizializza con valori casuali e mostra array
    for(int i = 0; i < N; i++)
    {
        if(i % 3 == 0)
            vet[i] = -(rand() % 100);
        else
            vet[i] = rand() % 100;
        printf("%d ", vet[i]);
    }
    
    // Stampare valore massimo
    int max = vet[0]; 
    for(int i = 0; i < N; i++)
    {
        if(vet[i] > max)
            max = vet[i];
    }
    printf("\n%d", max);
// TODO: Controllare se sta cosa funziona, manco l'ho compilato sto programma.
    return 0;
}
