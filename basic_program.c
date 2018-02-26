#include <stdio.h>

int main(int argc, char* argv[])
{
    int a, b, c, max, min;


    //error-corrective cyklus
    while(a == b | b == c | a == c) {

        printf("\nvlozte 3 NEROVNAKE cele cisla:\n");
        printf("\nvlozte cislo a = ");
        scanf("%d",&a);
        printf("\nvlozte cislo b = ");
        scanf("%d",&b);
        printf("\nvlozte cislo c = ");
        scanf("%d",&c);

        //porovnavac max hodnot
        if (a > b)
            max = a;
        else
            max = b;
        if (max < c)
            max = c;

        //porovnavac min hodnot
        if (a < b)
            min = a;
        else
            min = b;
        if (min > c)
            min = c;

        if(a==b&c!=b)
            printf("Vlozene su 2 rovnake cisla, nemozno porovnat! A=B.\n ");
        if(b==c&c!=a)
            printf("Vlozene su 2 rovnake cisla, nemozno porovnat! B=C.\n ");
        if(c==a&b!=c)
            printf("Vlozene su 2 rovnake cisla, nemozno porovnat! A=C.\n ");
        if(a==b&b==c)
            printf("Vlozene su 3 rovnake cisla, nemozno porovnat! A=B=C.\n ");
    }

    if (a != b | b != c | c != a) {
        printf("MAX CISLO JE %d\nMIN CISLO JE %d\n", max, min);

        return 0;
    } else return 0;


}