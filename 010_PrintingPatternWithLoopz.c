#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void print_pattern(int*);
void print_row(int, int, int, int);
void print_col(int, int, int, int);

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
    print_row(wxh, *num, 0, 0);
}

void print_row(int wxh, int o_layer, int row, int step){
    if(row < wxh && row < (wxh/2) ){
        print_col(wxh, o_layer, row, step);
        print_row(wxh, o_layer, row + 1, step + 1);
    } else if(row < wxh && row >= (wxh/2) ){
        print_col(wxh, o_layer, row, step);
        print_row(wxh, o_layer, row + 1, step - 1);
    }
}

/* inc_step is the accumulator */ 
/* step is the max amount of steps down/up */
void print_col(int wxh, int o_layer, int row, int step){

    int inc_step = 0;

    for(int i = 0; i < wxh; i++){
        /* middle */
        /* if( i == (wxh/2) && row == (wxh/2) ){ */
        /*     printf("%c ", '+'); */
        /* } else { */
        /*     printf("%d ", o_layer); */
        /* } */

        printf("%d ", o_layer - inc_step);

        if(i < (wxh/2) && inc_step < step)
            inc_step++;
        else if(i >= (wxh/2) && inc_step > 0 && i >= (wxh - step - 1))
            inc_step--;
    }
    printf("\n");
}
