#include <stdio.h>

int main(int argc, char* argv[]) {

    int a, b, max=0, min;

    printf("\nVlozte pocet cisel, ktore porovnate ");
    scanf("%d", &a);

        while(a>0) {
            printf("Vlozte cislo...:\t");
            scanf("%d", &b);

            if (b > max)
                max = b;
            else if (b < min) {
                min = b;
            }

            a--;
        }



    printf("The maximum number is %d\nThe minimum number is %d", max, min);
    return 0;
}