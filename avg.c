#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,6
    };
    float sum=0;
    float avg;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    avg=sum/5;
    printf("%.2f",avg);
}