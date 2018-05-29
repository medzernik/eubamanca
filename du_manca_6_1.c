#include <stdio.h>
#define MAX 20

double *sumapointer;
double suma=0;

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
    int i, j;


    sumapointer=&suma;
    for (i = 0; i < r; i++) {
        for (j = 0; j < s; j++);
            suma+=A[i][j];
    }

    return suma;
}

double PriemerPrvkovMatice(int r, int s, int A[MAX][MAX]){
    double priemer=0;
    printf("\n\n\nhodnota v pointeru je: %f\n\n\n", *sumapointer);
    priemer = *sumapointer/(r*s);
    return priemer;

}



int main(int argc, char* argv[]) {
    int r_a, s_a, r_b, s_b, A[MAX][MAX], B[MAX][MAX], TA[MAX][MAX], TB[MAX][MAX];



    //NACITANIE MATICE A
    printf("Zadajte rozmery matic (riadokA, stlpecA): \n");
    scanf("%d %d", &r_a, &s_a);
    printf("Nacitajte prvky matice A: \n");
    NacitajMaticu(r_a, s_a, A);

    /*NACITANIE MATICE B
    printf("Zadajte rozmery matic (riadokB, stlpecB): \n");
    scanf("%d %d", &r_b, &s_b);
    printf("Nacitajte prvky matice B: \n");
    NacitajMaticu(r_b, s_b, B);
    */


    //vypisanie matice A + suma + priemer
    printf("Matica A: \n");
    VypisMaticu(r_a, s_a, A);
    printf("\nSuma tejto matice je:\n %d\n\n", SumaPrvkovMatice(r_a, s_a, A));
    printf("\nPriemer tejto matice je:\n %.5f\n\n", PriemerPrvkovMatice(r_a, s_a, A));

    /*vypisanie matice B + suma + priemer
    printf("Matica B: \n");
    VypisMaticu(r_b, s_b, B);
    printf("\nSuma tejto matice je:\n %d\n\n", SumaPrvkovMatice(r_b, s_b, B));
    printf("\nPriemer tejto matice je:\n %.5f\n\n", PriemerPrvkovMatice(r_b, s_b, B));
    */
    //transponovanie matice A + suma + priemer
    TransponovanaMatica(r_a, s_a, A, TA);
    printf("\nTransponovana matica TA:\n");
    VypisMaticu(s_a, r_a, TA);
    printf("\nSuma tejto matice je: %d", SumaPrvkovMatice(s_a, r_a, TA));

    /*transponovanie matice B + suma + priemer
    TransponovanaMatica(r_b, s_b, B, TB);
    printf("\nTransponovana matica TB:\n");
    VypisMaticu(s_b, r_b, TB);
    printf("\nSuma tejto matice je: %d", SumaPrvkovMatice(s_b, r_b, TB));
    */

return 0;
}
