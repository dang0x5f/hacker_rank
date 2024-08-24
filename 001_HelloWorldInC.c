#include <stdio.h>

int main(int argc, char** argv){
    char s[100];
    scanf("%[^\n]%*c", s);

    printf("Hello, World!\n");

    printf("%s\n", s);

    return(0);
}
