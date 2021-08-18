#include <stdio.h>

int main(){
    char s[10000];
    gets(s);
    int i=0;
    while(s[i] != '\0'){
    i++;
    }
    printf("\n%d",i);
    return 0;
}
