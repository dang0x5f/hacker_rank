#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int splitandsum(int);

int main(void){
    int n, sum = 0;
    scanf("%d", &n);

    sum = splitandsum(n);

    printf("%d\n", sum);

    return(0);
}

int splitandsum(int num){
    if(num < 10)
        return num;
    else
        return (num%10) + splitandsum(num/10);
}
