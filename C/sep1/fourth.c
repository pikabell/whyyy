#include <stdio.h>
#include <string.h>

void reverse(char s[] , int len){
    for(int i = len-1; i>=0;i--){
        printf("%c", s[i]);
    }

}
int main(){
    char s[100];
    printf("Enter something to reverse : ");
    fgets(s,100,stdin);
    int len = (strlen(s));
    reverse(s,len) ;
    return 0;
}
