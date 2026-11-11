#include <stdio.h>


int CercaPattern(int* secondario, int* principale);
int N = 10;
int M = 3;

int main(void)
{
    // Generare un array principale di N interi
    // e un array secondario di M interi con M < N
    // Inizializzare arbitrariamente gli array

    int principale[N];

    puts("\n=====================================");
    for(int i = 0; i < N; i++)
    {
        principale[i] = i+2;
        printf("%d ", principale[i]);
    }
    puts("\n=====================================");
    
    int secondario[M];

    puts("\n=====================================");
    for(int i = 0; i < M; i++)
    {
        secondario[i] = i+9;
        printf("%d ", secondario[i]);
    }
    puts("\n=====================================");
    
    
    // Implementare una funzione che verifica se l'array secondario 
    // appare come sotto-sequenza dell'array principale
    // e restituisca l'indice di inizio (-1 altrimenti)
    int sotto_sequenza = CercaPattern(secondario, principale);
    
    if(sotto_sequenza == -1)
        printf("\nLa sotto-sequenza non è presente");
    else
        printf("\nLa sotto-sequenza inzia all'indice: %d", sotto_sequenza);

    puts("");    

    return 0;
}


int CercaPattern(int* secondario, int* principale)
{
    int presente = -1;
    // Cerca all'interno di principale il primo valore corrispondente con secondario[0]
    for(int i = 0; i < N-M + 1; i++)
    {
        if(principale[i] == secondario[0])
        {
            presente = i;
            // controlla se il valore successivo è valido, altrimenti continua a cercare
            for(int j = 1; j < M; j++)
            {
                if(principale[i+j] != secondario[j])
                    presente = -1; 
            }
        }
    }
    return presente;
}
