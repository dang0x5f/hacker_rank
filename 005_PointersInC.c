#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b){
    int ca = *a;    // copy of a
    int cb = *b;    // copy of b

    // sum
    *a = ca + cb;

    // abs diff
    *b = abs(ca - cb);
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d %d", a, b);

    return(0);
}
