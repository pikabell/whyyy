#include <stdio.h>
#include <stdbool.h>

bool vote(int age){
    return age>=18;
}
int main(){
    printf("Enter your age : ");
    int age;
    scanf("%d" , &age);
    if(vote(age)) 
        printf("YOU ARE ELIGIBLE TO VOTE ");
    else 
        printf("YOU ARE NOT ELIGIBLE TO VOTE ");
    return 0;
}
