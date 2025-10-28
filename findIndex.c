#include<stdio.h>
int main ()
{
    int arr[5]={52,65,85,45,25};
    int a;
    scanf("%d",&a);
    for(int i=0;i<5;i++){
        if(arr[i]==a){
            printf("index=%d",i);
        }
    }
}