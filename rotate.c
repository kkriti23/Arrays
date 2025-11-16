// to rotate by k times
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int k,ind=-1;
    scanf("%d",&k);
    for(int i=0;i<5;i++){
        if(i==k){
           ind=i; 
        }
    }
    if(ind>=0){
        for(int i=0;i<ind;i++){
            for(int i=0;i<4;i++){
                    int temp=arr[i];
                    arr[i]=arr[i+1];
                    arr[i+1]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}