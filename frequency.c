#include<stdio.h>
int main()
{
    int arr[100], freq[100];
    int n, l, count;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(l = 0; l < n; l++) {
        scanf("%d", &arr[l]);
        freq[l] = -1;
    }
	int i,j,k;
    for(i=0;i<n;i++){
        int count=1;
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
               freq[j]=0;
            }
        }
        if(freq[i]!=0){
            freq[i]=count;
        }
    }
    for(k=0;k<n;k++){
        if(freq[k]!=0){
            printf("frequency of %d is %d\n",arr[k],freq[k]);
        }
    }
}
