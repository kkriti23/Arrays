#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int n;
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(i==n){
            printf("element:%d",arr[i]);
        }
    }
}