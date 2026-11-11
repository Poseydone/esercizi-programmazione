#include <stdio.h>

int main(void)
{
    // 200 a settimana + 9% vendite settimana
    // 5000 in una settimana riceve 200 + 9% 5000 = 650
    
    float percentuale_settimana = 9;
    float paga_base = 200;
    float settimana;

    printf("\nInserire guadagno in dollari: ");
    scanf("%f%*c", &settimana);

    // 9 per cento di n è n*9 / 100
    printf("\nSalario: %.2f", paga_base + (settimana * percentuale_settimana / 100)); 

    puts("");

    return 0;
}
