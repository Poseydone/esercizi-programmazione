#include <stdio.h>
#include <stdlib.h>

void ShiftCircolareDestra(int k, int* array, int N); 

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

    int k;
    printf("\nInserire valore dello shift:");
    scanf("%d", &k);
    

    // Implementare una funzione che esegue uno shift circolare
    // a destra di K posizioni (gli ultimi elementi tornano a destra)
    // con k da input e stampi l'array risultante
    ShiftCircolareDestra(k, array, N); 
    
    puts(""); 
    puts(""); 
    return 0;
}


void ShiftCircolareDestra(int k, int* array, int N)
{
    int tmp;
    for(int i = 0; i < k; i++)
    {
        tmp = array[0];
        for(int j = 0; j < N; j++)
        {
            if(j != N-1)
                array[j] = array[j+1];
            else
                array[j] = tmp;
        }
    }

    puts("\n===========================");
    for(int i = 0; i < N; i++)
        printf("%d ", array[i]);
    puts("\n===========================");

}
