#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{
    // dati vettore di interi vet di lunghezza n data in input
    // ed un intero k, si determini l'elemento di vett più prossimo a k
    // e lo si stampi assieme all'indice corrispondente.
    // Suppongo di dover inizializzare con valori casuali il vettore, anche se non è scritto.

    int n, k;
    printf("\nInserire lunghezza vettore: ");
    scanf("%d", &n);
    printf("\nInserire valore di k: ");
    scanf("%d", &k);

    int vet[n];

    puts("\n============================");
    // Inizializza vettore con valori casuali
    for(int i = 0; i < n; i++)
    {
        vet[i] = rand() % 101;
        printf("%d ", vet[i]);
    }
    puts("\n============================");
    
    // Controlla quale elemnto si avvicina di più a k
    int temp = 1000;
    int index;
    for(int i = 0; i < n; i++)
    {
        int mod = abs(k - vet[i]);
        if(mod <= temp)
        {
            temp = mod;
            index = i;
        }
    }
    

    printf("\nIl valore più prossimo a k è: %d di indice %d", vet[index], index);
 
    puts("");

    return 0;
}
