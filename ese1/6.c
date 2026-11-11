#include <stdio.h>

int main(void)
{
    // dire se un intero è pari o dispari

    int n;
    printf("\nInserire numero intero: ");
    scanf("%d", &n);

    if((n % 2) == 0)
        printf("\nPari");
    else
        printf("\nDispari");

    puts("");

    return 0;
}
