#include <stdio.h>

int main() {

    int a, b, min;

    scanf("%d %d", &a, &b);

    if(a>b)
        min=b;
    else
        min=a;

    printf("%d", min);
    return 0;
}
