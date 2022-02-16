//find the largest element in the array
#include <stdio.h>

int main()
{
    int arr[]={1,20,3,4,5};//declare an array
    int i,max=0;
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
        max=arr[i];
        printf("print max value=%d\n",max); // debugging
    }
    printf("print largest value=%d\n",max); 
    return 0;
}

