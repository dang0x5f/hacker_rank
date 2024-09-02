#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define ASCEND_FLAG  (1<<7)
#define DESCEND_FLAG (1<<6)

void print_pattern(int*);
void print_row(int, int, int);
void print_col(int, int, int);

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
    print_row(wxh, *num, 0);
}

void print_row(int wxh, int o_layer, int row){
    if(row < wxh){
        print_col(wxh, o_layer, row);
        print_row(wxh, o_layer, row + 1);
    }
}

void print_col(int wxh, int o_layer, int row){
    for(int i = 0; i < wxh; i++){
        /* printf("%d ", o_layer); */

        /* middle */
        if( i == (wxh/2) && row == (wxh/2) ){
            printf("%c ", '+');
        } else {
            printf("%d ", o_layer);
        }

    }

    printf("\n");
}
