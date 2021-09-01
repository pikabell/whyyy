#include <stdio.h>
#include <stdbool.h>

bool prime(int a){
    for(int i=2;i*i<=a;i++){
    if(a%i==0) return false;
    }
    return true;
    
}

int check(int arr[]){
    int count = 0;
    for(int i=0;i<10;i++){
    if(prime( *(arr+i)) ) count++;
    }
    return count;
}


int main(){
    int arr[10] = {3, 7, 15, 17, 18, 37, 41, 21, 47, 101};
    int count = check(arr);
    printf("Total primes in this array are %d " , count);
    return 0;
}
