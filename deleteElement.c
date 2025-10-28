//to delete an element of an array
#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int n,new,ind=-1;
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(arr[i]==n){
            i=ind;
        }
    }
    if(ind>=0){
        for(int i=ind;i<5;i++){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    arr[4]==0;
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
}