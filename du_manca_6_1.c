#include <stdio.h>
#define MAX 20



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


int SumaPrvkovMatice(int r, int s, int A[MAX][MAX]){


}


double PriemerPrvkovMatice(int r, int s, int A[MAX][MAX]){


}



int main() {
    int a, b, A[MAX][MAX], B[MAX][MAX], TA[MAX][MAX], TB[MAX][MAX];
    printf("Zadajte rozmery matic: \n");
    scanf("%d %d", &a, &b);

    //NACITANIE MATICE A
    printf("Nacitajte prvky matice A: \n");
    NacitajMaticu(a, b, A);

    printf("Matica A: \n");
    VypisMaticu(a, b, A);

    TransponovanaMatica(a, b, A, TA);
    printf("Transponovana matica TA:\n");
    VypisMaticu(a, b, TA);

return 0;
}
