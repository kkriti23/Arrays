#include<stdio.h>
int main()
{
	int arr[9]={1,2,1,2,3,0,1,2,4};
	int i,j=1,count=0;
	for(i=0;i<9;i++){
			if(arr[i]<arr[i+1]){
				count++;
			}
	}
	printf("%d",count);
}
