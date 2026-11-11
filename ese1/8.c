#include <stdio.h>

int main(void)
{
    // Acquisire e convertire un carattere.
    // Indicare se il carattere è una letterea maiuscola, minoscola, cifra numerica, altro

    char car;
    printf("\nInserire carattere: ");
    scanf("%c", &car);

    if(car >= 'A' && car <= 'Z')
        printf("\nLettera maiuscola");
    else if(car >= 'a' && car <= 'z')
        printf("\nLettera minuscola");
    else if(car >= '0' && car <= '9')
        printf("\nCifra numerica");
    else
        printf("\nTipo di carattere sconosciuto");

    puts("");
    
    return 0;
}
