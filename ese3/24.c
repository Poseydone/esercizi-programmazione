#include <stdio.h>
#include <stdlib.h>

void RimuoviDuplicati(int* array, int N);

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

    // Implementare una funzione che crei un nuovo array contenente solo
    // valori unici (no duplicati) e stampi il risultato
    RimuoviDuplicati(array, N);
    
    puts("");
    puts("");

    return 0;
}

void RimuoviDuplicati(int* array, int N)
{
    int new_array[N]; 
    int k = 0;

    for(int i = 0; i < N; i++)
    {
        for(int j = i+1; j < N - 1; j++)
        {
            if(array[j] == array[i])
            {
                array[i] = -1; 
                array[j] = -1;
            }
        }

        if(array[i] != -1)
        {
            new_array[k++] = array[i];
        }
    }

    puts("\nNuovo array");
    for(int i = 0; i < k; i++)
        printf("%d ", new_array[i]);
}
