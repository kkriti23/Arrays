#include<stdio.h>
int main ()
{
    int arr[5]={1,2,3,8,5};
    int max=0;
    for(int i=0;i<5;i++){
        if(arr[i]>arr[max])
        max=i;
    }
    printf("%d",arr[max]);
}