#include <stdio.h>

int main(void){
	printf("Length of Array : ");
	int n;
	scanf("%d",&n);
	printf("Original Array : ");
	int arr[n];
	for (int i=1; i<=n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Unique triplets of the said array whose sum equal to zero : ");
	for (int i=1; i<=n; i++){
		for (int j=i+1; j<=n; j++){
			for (int k=j+1; k<=n; k++){
				if (arr[i]+arr[j]+arr[k]==0){
					printf("%d %d %d\n",arr[i],arr[j],arr[k]);
				}
			}
		}
	}
	return 0;
}
