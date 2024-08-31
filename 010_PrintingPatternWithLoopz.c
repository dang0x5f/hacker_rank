#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_pattern(int*);
void print_row(int, int, int);
void print_col(int, int);

int main(void){
    int n;
    scanf("%d", &n);
    
    if(n > 1)
        print_pattern(&n);

    return(0);
}

void print_pattern(int* num){
    int wxh;
    wxh = (*num << 1) - 1;
    print_row(wxh, *num, 1);
}

void print_row(int wxh, int o_layer, int row){
    print_col(wxh, o_layer);

    if(row <= wxh)
        print_row(wxh, o_layer, row + 1);
}

void print_col(int wxh, int o_layer){
    for(int i = 0; i < wxh; i++)
        printf("%d  ", o_layer);

    printf("\n");
}
