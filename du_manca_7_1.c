#include <stdio.h>
#define MAX 20


void NacitajMaticuA(int r, int s, int A[MAX][MAX]) {
    int i, j;
    for (i = 0; i<r; i++)
        for (j = 0; j<s; j++)
            scanf("%d", &A[i][j]);
}

void NacitajMaticuB(int r, int s, int B[MAX][MAX]) {
    int i, j;
    for (i = 0; i<r; i++)
        for (j = 0; j<s; j++)
            scanf("%d", &B[i][j]);
}


void VypisMaticuA(int r, int s, int A[MAX][MAX]){
    int i, j;
    for (i = 0; i<r; i++)
    {
        for (j = 0; j<s; j++)
            printf("%5d    ", A[i][j]);
        printf("\n");
    }
}

void VypisMaticuB(int r, int s, int B[MAX][MAX]) {
    int i, j;
    for (i = 0; i<r; i++)
    {
        for (j = 0; j<s; j++)
            printf("%5d    ", B[i][j]);
        printf("\n");
    }
}


double PriemerNaDiagonaleA(int r, int s, int A[MAX][MAX]) {
    int i, j, counter = 0, suma = 0;
    double priemerA;
    for (i = 0; i<r; i++)
        for (j = 0; j<s; j++)
            if (j == i) {
                suma += A[i][j];
                counter++;
            }
    priemerA = suma / (float)counter;
    return priemerA;
}

double PriemerNaDiagonaleB(int r, int s, int B[MAX][MAX]) {
    int i, j, counter = 0, suma = 0;
    double priemerB;
    for (i = 0; i<r; i++)
        for (j = 0; j<s; j++)
            if (i == j) {
                suma += B[i][j];
                counter++;
            }
    priemerB = suma / (float)counter;
    return priemerB;
}

int main() {
    int r, s, A[MAX][MAX], B[MAX][MAX];
    printf(" pocet riadkov, stlpcov a jednotlive prvky matic: ");
    scanf("%d %d", &r, &s);
    NacitajMaticuA(r, s, A);
    NacitajMaticuB(r, s, B);
    printf("Matica A:\n");
    VypisMaticuA(r, s, A);
    printf("Matica B:\n");
    VypisMaticuB(r, s, B);
    printf("\nPriemer prvkov na hlavnej diagonale matice A je: %.2f\n", PriemerNaDiagonaleA(r, s, A));
    printf("\nPriemer prvkov na hlavnej diagonale matice B je: %.2f\n", PriemerNaDiagonaleB(r, s, B));
    return 0;
    //David Manca, M.I.T License 2018
}
