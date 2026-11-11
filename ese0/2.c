#include <stdio.h>

int main(void)
{
    char car;

    printf("\nInserire carattere ASCII: ");
    scanf("%c", &car);

    printf("\nCodice ASCII di %c: %d", car, car);

    int newcar = (int)car + 1;
    printf("\nValore successivo: %d --> Carattere: %c", newcar, (char)newcar);
    newcar = (int)car - 1;
    printf("\nValore precedente: %d --> Carattere: %c", newcar, (char)newcar);
    newcar = (int)car * 2;
    printf("\nValore raddoppiato: %d --> Carattere: %c", newcar, (char)newcar);

    puts("");

    return 0;
}
