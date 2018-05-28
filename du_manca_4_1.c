//uloha 4_1

#include <stdio.h>
#define MAX 20
int main(int argc, char* argv[]) {
    int i=0, j=0, pocitadlo=0, suma=0, maximum_vyuzite=0, mod;
    int celecisla[MAX], neparnecisla[MAX];
    double priemer_neparnych=0;

    do {
        scanf("%d", &celecisla[i]);
        mod=celecisla[i]%2;
        if(mod!=0){
            suma+=celecisla[i];
            pocitadlo++;
            neparnecisla[j]=celecisla[i];
            j++;
        }
    }while(celecisla[i++]!=0);


    priemer_neparnych=suma/(double)pocitadlo;

    i=0;

    printf("Neparne prvky: ");
    for(j=0;j<pocitadlo;j++)
        printf("%d, ", neparnecisla[j]);

    printf("\nSuma neparnych je %d\n\n", suma);
    printf("Priemer neparnych je: %.2f", priemer_neparnych);

    return 0;

    //Copyright David Manca, MIT License, 2018
}
