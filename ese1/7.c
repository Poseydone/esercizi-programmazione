#include <stdio.h>

int main(void)
{
    // Richiedere un carattere e rappresentarlo in 
    // formato ASCII
    // formato decimale
    // formato esadecimale
    // formato binario
    
    char car;
    printf("\nInserire un carattere: ");
    scanf("%c%*c", &car);
    
    printf("\nCarattere: %c", car);
    printf("\nDecimale: %d", (int)car);
    printf("\nEsadecimale: %02X", car);
    printf("\nBinario: %b", car);

    puts("");

    return 0;
}
