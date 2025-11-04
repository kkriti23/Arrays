#include<stdio.h>
int main ()
{
    int arr[5]={1,2,3,8,5};
    int min=0;
    for(int i=0;i<5;i++){
        if(arr[i]<arr[min])
        min=i;
    }
    printf("%d",arr[min]);
}