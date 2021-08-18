#include <stdio.h>
#include <stdbool.h>

int prime(int n){
    for(int i=2;i*i<=n;i++){
    if(n%i==0) return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a no. to check: ");
    scanf("%d",&n);
    prime(n)?printf("\nPrime"):printf("Not prime");
    return 0;
}
