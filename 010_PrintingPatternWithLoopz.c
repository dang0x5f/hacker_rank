/* recursive-like solution */
#include <stdio.h>
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
    if(row < wxh){
        print_col(wxh, o_layer, row, step);
        if(row < (wxh/2))
            print_row(wxh, o_layer, row + 1, step + 1);
        else if(row >= (wxh/2))
            print_row(wxh, o_layer, row + 1, step - 1);
    } 
}

void print_col(int wxh, int o_layer, int row, int step){
    int inc_step = 0;

    for(int i = 0; i < wxh; i++){
        printf("%d ", o_layer - inc_step);

        if(i < (wxh/2) && inc_step < step)
            inc_step++;
        else if(i >= (wxh/2) && inc_step > 0 && i >= (wxh - step - 1))
            inc_step--;
    }
    printf("\n");
}
