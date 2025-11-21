#include<stdio.h>
int main()
{
	int arr[]={2,3,-1,8,4};
	int len=sizeof(arr)/sizeof(arr[0]);
	int i,j,k;
	int sumL=0,sumR=0;
	for(i=1;i<len-1;i++){
		sumL=0;
		sumR=0;
		for(j=0;j<i;j++){
			sumL=sumL+arr[j];
		}
		for(k=i+1;k<len;k++){
			sumR=sumR+arr[k];
		}
		if(sumL==sumR){
			printf("%d ",arr[i]);
		}
	}
}
