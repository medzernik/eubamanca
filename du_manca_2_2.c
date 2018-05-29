#include <stdio.h>

int main(int argc, char* argv[]) {

    int a, b, min;

    scanf("%d %d", &a, &b);

    if(a>b)
        min=b;
    else
        min=a;

    printf("%d", min);
    return 0;
    //David Manca, M.I.T License 2018
}
