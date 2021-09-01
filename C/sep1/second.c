#include <stdio.h>

int greatest(int arr[]){
    int ans = -99999999;
    for(int i=0;i<10;i++){
    if(*(arr+i) > ans) ans = *(arr+i);
    }
    return ans;
}
int main(){
    int arr[10] = {10,0,231,1245,6,25,-12,69,1212,420};
    int ans  = greatest(arr);
    printf("greatest in this array is %d " , ans);
    return 0;
}
