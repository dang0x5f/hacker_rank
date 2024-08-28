#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int, int);

int main(void){
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return(0);
}

void calculate_the_maximum(int max, int threshold){
    int max_and = 0,max_or = 0,max_xor = 0;

    for(int x = 1; x < 5; x++){

        int a = x;
        int b = a+1;
        while(b <= threshold){
            int temp_and = a & b;
            int temp_or  = a | b;
            int temp_xor = a ^ b;

            if( temp_and > max_and && temp_and < max )
                max_and = temp_and;

            if( temp_or > max_or && temp_or < max )
                max_or = temp_or;

            if( temp_xor > max_xor && temp_xor < max )
                max_xor = temp_xor;

            b++;
        }
        
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}
