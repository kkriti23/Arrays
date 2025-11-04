#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int b[5]={1,2,3,4,5};
    int count=0;
    for(int i=0;i<5;i++){
        if(a[i]==b[i]){
            count++;
        }
    }
    if(count==5){
        printf("Equal");
    }else{
        printf("Different");
    }
}