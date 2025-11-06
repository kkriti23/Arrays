#include<stdio.h>
void deleteLast(int arr[],int *n){
    (*n)--;
}
int main()
{
   int n;
   scanf("%d",&n);
   int arr[n];
   int l;
   for(l=0;l<n;l++){
       scanf("%d",&arr[l]);
   }
   int num,j;
   scanf("%d",&num);
   
    
   int ind=-1,k;
   for(k=0;k<n;k++){
        if(arr[k]==num){
            ind=k;
        }
    }
    if(ind>=0){
    	int i;
        for(i=ind;i<n;i++){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
   
   deleteLast(arr,&n);
   for(j=0;j<n;j++){
    printf("%d",arr[j]);
   }
}