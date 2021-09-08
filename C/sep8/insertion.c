#include <stdio.h>

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
} 

  
int main()
{   
    int arr[] = {123, 0, 52, 5, -7, 30, 59};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printf("Sorted array: \n");
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
    }
    return 0;
}
