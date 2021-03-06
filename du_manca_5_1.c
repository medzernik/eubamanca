#include <stdio.h>
#define MAX 100

int main(int argc, char* argv[]) {
    int n, i = 0, j = 0, suma = 0, overovac=1, cisla[MAX];
    double priemer_cislo = 0, priemer_odchyliek, suma_odchyliek = 0, medzichecker = 0;

    printf("Zadajte pocet cisel na spracovanie:\n");
    do{
        scanf("%d", &n);
        if(n<1 || n>MAX)
            printf("Musite zadat pouzitelnu velkost pola (1-100):\n");
    }
    while(n<1 || n>MAX);
    
    for (i = 0; i < n; i++) {
        printf("Zadajte %d cislo:\n->", overovac);
        scanf("%d", &cisla[i]);

        if(cisla[i]>0) {
            printf("OK\n------\n");
            overovac++;
        } else {
            printf("!------!\n!!NESPRAVNE ZADANE CISLO!! Opakujte zadanie %d cisla\n!------!\n\n", overovac);
            i--;
        }
    }

    for (j = 0; j < i; j++)
        suma += cisla[j];

    priemer_cislo = (double)suma / n;

    for (j = 0; j < i; j++) {
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
    printf("[OUTPUT] -> Priemer odchyliek cisiel v odchylkovom poli je: %.5f", priemer_odchyliek);

    return (0);
    //Copyright David Manca, MIT License 2018
}
