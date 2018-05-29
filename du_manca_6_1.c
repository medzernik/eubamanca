#include <stdio.h>
#define MAX 20

double *sumapointer=NULL;

void NacitajMaticu(int r, int s, int A[MAX][MAX]){
    int i, j;
    for(i=0; i<r; i++)
        for(j=0; j<s; j++)
            scanf("%d", &A[i][j]);
}

void VypisMaticu(int r, int s, int A[MAX][MAX]){
    int i, j;
    for(i=0; i<r; i++) {
        for (j = 0; j < s; j++)
            printf("%5d", A[i][j]);
        printf("\n");
    }

}


void TransponovanaMatica(int r, int s, int A[MAX][MAX], int TA[MAX][MAX]){
    int i, j;
    for(i=0; i<s; i++) {
        for (j=0; j<r; j++)
            TA[i][j]=A[j][i];
    }
}


int SumaPrvkovMatice(int r, int s, int A[MAX][MAX]) {
    int i, j, suma=0;

    sumapointer=&suma;
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++);
            suma+=A[i][j];
    }
    
    return suma;
}

double PriemerPrvkovMatice(int r, int s, int A[MAX][MAX]){
    double priemer;
    priemer = *sumapointer/(r*s);
    return priemer;

}



int main(int argc, char* argv[]) {
    int a, b, A[MAX][MAX], B[MAX][MAX], TA[MAX][MAX], TB[MAX][MAX];
    printf("Zadajte rozmery matic (riadok, stlpec): \n");
    scanf("%d %d", &a, &b);

    //NACITANIE MATICE A
    printf("Nacitajte prvky matice A: \n");
    NacitajMaticu(a, b, A);



    //vypisanie matice A + suma + priemer
    printf("Matica A: \n");
    VypisMaticu(a, b, A);
    printf("\nSuma tejto matice je:\n %d\n\n", SumaPrvkovMatice(a, b, A));
    printf("\nPriemer tejto matice je:\n %.5f\n\n", PriemerPrvkovMatice(a, b, A));

    //transponovanie matice A + suma + priemer
    TransponovanaMatica(a, b, A, TA);
    printf("Transponovana matica TA:\n");
    VypisMaticu(b, a, TA);
    printf("Suma tejto matice je: %d", SumaPrvkovMatice(b, a, TA));

    scanf("%d %d", &a, &b);

return 0;
}
