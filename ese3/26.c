#include <stdio.h>
#include <stdlib.h>

void Pari(int* array, int N);
void Dispari(int* array, int N);

int main(void)
{
    // Inizializzare array di N elementi (N da input)
    // con valori random (0 - 9)
    int N;
    printf("\nInserire lunghezza array:");
    scanf("%d", &N);
    
    int array[N];

    puts("\n===========================");
    for(int i = 0; i < N; i++)
    {
        array[i] = rand() % 10;
        printf("%d ", array[i]);
    }
    puts("\n===========================");
    
    // Implementare due funzioni che generino:
    // un vettore contenente solo pari e uno solo dispari
    Pari(array, N);
    Dispari(array, N);
    
    puts(""); 
    puts(""); 
    return 0;
}

void Pari(int* array, int N)
{
    int array_pari[N];
    int k = 0;

    for(int i = 0; i < N; i++)
    {
        if(array[i] % 2 == 0)
        {
            array_pari[k++] = array[i];
        }
    }

    puts("\n===========================");
    for(int i = 0; i < k; i++)
    {
        printf("%d ", array_pari[i]);
    }
    puts("\n===========================");
}

void Dispari(int* array, int N)
{
    int array_dispari[N];
    int k = 0;

    for(int i = 0; i < N; i++)
    {
        if(array[i] % 2 != 0)
        {
            array_dispari[k++] = array[i];
        }
    }

    for(int i = 0; i < k; i++)
    {
        printf("%d ", array_dispari[i]);
    }
    puts("\n===========================");
}
