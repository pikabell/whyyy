#include <stdio.h>
  
  
void selectionSort(int arr[], int n)
{
   int m ;
    for(int i=0;i<n-1;i++){
        m=i;
    for(int j=i+1;j<n;j++){
    if(arr[j] < arr[m])
        m=j;    
    }
    int temp = arr[i];
    arr[i] = arr[m];
    arr[m] = temp;
    }
}

  
int main()
{   
    int arr[] = {123, 0, 52, 5, -7, 30, 59};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}
