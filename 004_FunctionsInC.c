#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int biggest = a;

    if(b > biggest)
        biggest = b;
    if(c > biggest)
        biggest = c;
    if(d > biggest)
        biggest = d;

    return(biggest);
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return(0);
}
