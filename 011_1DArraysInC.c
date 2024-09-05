#include <stdio.h>
#include <stdlib.h>

int main(void){
    int sum = 0, n, *np;
    scanf("%d", &n);

    np = calloc(n, sizeof(int));

    for(int i = 0; i < n; i++)
       scanf("%d", np + i); 

    for(int i = 0; i < n; i++)
        sum += *(np + i);

    printf("%d\n", sum);

    free(np);
    
    return(0);
}
