#include <stdio.h>

int main(int argc, char* argv[]) {
    int a, b, nsd;

    scanf("%d %d", &a, &b);

    while(a!=b) {
        if(a > b)
            a = a - b;
        else
            b = b - a;
    }

    nsd=a;

    printf("NSD je: %d", nsd);
    return 0;
}
