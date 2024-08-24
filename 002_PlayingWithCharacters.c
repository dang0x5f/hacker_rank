#include <stdio.h>

int main(int argc, char** argv){
    char ch;
    char s[25];
    char sen[100];

    scanf("%c", &ch);            //  char
    scanf("%s", s);             // string
    scanf("%[^\n]%*c", sen);    // sentence

    printf("%c", ch);
    printf("%s", s);
    printf("%s", sen);

    return(0);
}
