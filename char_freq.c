#include<stdio.h>
int main()
{
    char arr[100] ;
    int freq[100];
    scanf("%s",&arr);
    int len=0;
	while(arr[len]!='\0'){
		len++;
	}
    int l,m,count;
	for(m=0;m<len;m++){
		freq[m]=-1;
	}
    
	int i,j,k;
    for(i=0;i<len;i++){
        int count=1;
        for(j=i+1;j<len;j++){
            if(arr[i]==arr[j]){
                count++;
               freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(k=0;k<len;k++){
        if(freq[k]!=0){
            printf("%c%d ",arr[k],freq[k]);
        }
    }
}
