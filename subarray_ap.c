#include<stdio.h>
int main()
{
	int arr[]={10,2,4,7,10,13,16,2,3};
	int count=0,maxcount=-1,tstart=-1,start=-1;
	int len=sizeof(arr)/sizeof(arr[0]);
	int i,j;
	for(i=1;i<len;i++){
		if(arr[i]-arr[i-1]==arr[i+1]-arr[i]){
			count++;
			if(tstart==-1){
				tstart=i-1;
			}
		}else if(count!=0 && count>maxcount){
			maxcount=count;
			count=0;
			start=tstart;
			tstart=-1;
		}
	}
	int end=start+maxcount+2;
	for(j=start;j<end;j++){
		printf("%d ",arr[j]);
	}
}
