#include<stdio.h>
int main()
{
	int arr[]={1,2,1,2,3,4,5,0,1,2,3};
	int maxcount=0,count=0,start=-1,tstart=-1,end=-1;
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<len;i++){
		if(arr[i+1]-arr[i]==1){
			count++;
			if(tstart==-1){
			    tstart=i;
			}
		}else if(count!=0 && count>maxcount){
			maxcount=count;
			count=0;
			start=tstart;
			tstart=-1;
		}
	}
	end=start+maxcount;
	for(int i=start;i<=end;i++){
		printf("%d ",arr[i]);
	}
}
