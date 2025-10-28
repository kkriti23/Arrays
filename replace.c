//to replace an element from an index in array
#include<stdio.h>
int main ()
{
    int arr[5]={25,65,85,45,55};
    int index,n;
    printf("Index of no. to be replaced :");
    scanf("%d",&index);
    printf("No.to be replaced with :");
    scanf("%d",&n);
    for(int i=0;i<5;i++){
        if(i==index){
            arr[i]=n;
        }
    }
    for(int j=0;j<5;j++){
        printf("%d\t",arr[j]);
    }
}