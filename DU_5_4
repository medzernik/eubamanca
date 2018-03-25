#include <stdio.h>
#define MAX 100

int main() {
    int n=0, cisla[MAX],i=0, j=0, suma=0;
    double priemer_cislo=0, priemer_odchyliek, suma_odchyliek=0, medzichecker=0;

    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &cisla[i]);

    for(j=0;j<i;j++)
        suma += cisla[j];

    priemer_cislo = (double)suma/n;

    for(j=0;j<i;j++){
        medzichecker = 0;
        medzichecker += cisla[j] - priemer_cislo;

        if (medzichecker < 0)
            medzichecker = -medzichecker;
        suma_odchyliek += medzichecker;
        }

        priemer_odchyliek = suma_odchyliek / n;

    printf("[DEBUG] Aritmeticky priemer ciselneho pola je: %.5f\n", priemer_cislo);
    printf("[DEBUG] Suma cisel v ciselnom poli je: %d\n", suma);
    printf("[DEBUG] Suma cisel v odchylkovom poli je: %.5f\n\n", suma_odchyliek);
    printf("[OUTPUT]Priemer odchyliek cisiel v odchylkovom poli je: %.5f", priemer_odchyliek);

    return(0);
}


