#include <stdio.h>

int main(void)
{
    int scelta;
    // convertire fra carattere, valore esadecimale e 
    do
    {
        printf("\nScegliere un opzione: \n");
        printf("\n1. Convertire carattere in esadecimale e binario"
               "\n2. Convertire esadecimale in carattere e binario"
               "\n3. Convertire binario in esadecimale e carattere"
               "\n0. Terminare\n\n\n:");
        scanf("%d%*c", &scelta); 
        
        if(scelta == 1)
        {
            char car;
            printf("\nInserire carattere: ");
            scanf("%c%*c", &car);

            printf("\nEsadecimale: %02X", car);
            printf("\nBinario: %b", car);
        }
        else if(scelta == 2)
        {
            int esa;
            printf("\nInserire valore decimale: ");
            scanf("%02X%*c", &esa);

            printf("\nCarattere: %c", (char)esa);
            printf("\nBinario: %b", esa);
        }
        else if(scelta == 3)
        {
            int bin;
            printf("\nInserire valore binario: ");
            scanf("%b%*c", &bin);

            printf("\nCarattere: %c", (char)bin);
            printf("\nEsadecimale: %02X", bin);
        }
    }
    while(scelta != 0);

    printf("\n\nBye bye\n\n");

    return 0;
}
