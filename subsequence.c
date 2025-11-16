#include<stdio.h>
int main()
{
	int arr[9]={1,2,1,2,3,0,1,2,3};
	int i,count=0;
	int seq[100];
	for(i=0;i<9;i++){
			if(arr[i]+1==arr[i+1]){
				count++;
				seq[i]=0;
			}
        if(seq[i]!=0){
            seq[i]=count;
        }
			printf("%d ",seq[i]);
	}
	
}
