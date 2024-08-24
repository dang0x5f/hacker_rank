#include <stdio.h>

int main(int argc, char** argv){
    int i1, i2;
    float f1, f2;

    scanf("%d %d", &i1, &i2);
    scanf("%f %f", &f1, &f2);

    printf("INT RES: %d\n", i1+i2);
    printf("FLT RES: %f\n", f1+f2);

    return(0);
}
