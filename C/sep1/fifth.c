#include<stdio.h>  

int main()  
{  
    int i, j,temp;   
    int a[9] = {23,19,45,31,67,2,83,21,4};   
    for(i=0; i<9; i++)  
    {  
        for(j = i+1; j<9; j++)  
        {  
            if(a[j] < a[i])  
            {  
                temp = a[i];  
                a[i] = a[j];  
                a[j] = temp;   
            }   
        }   
    }   
    printf("sorted array\n");  
    for(i = 0; i<9; i++)  
    {  
        printf("%d ",a[i]);  
    }
    return 0;
}
