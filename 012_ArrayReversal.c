#include <stdio.h>
#include <stdlib.h>

int main(){
    int num, *arr, i;

    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
        scanf("%d", arr + i);

    // reverse
    int temp;
    for(i = 0; i < num/2; i++){
        temp = *(arr + (num - i - 1));
        *(arr + (num - i - 1)) = *(arr + i);
        *(arr + i) = temp;
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    return(0);
}
