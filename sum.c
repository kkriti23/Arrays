#include<stdio.h>
int main()
{
    int n;
    printf("total no.:");
    scanf("%d",&n);
    printf("Numbers:\n");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
}