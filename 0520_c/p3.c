#include <stdio.h>

int main(void){
	printf("Length of Array : ");
	int n, tr;
	scanf("%d",&n);
	printf("Original Array : ");
	int arr[n];
	for (int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("Target Value : ");
	scanf("%d", &tr);
	for (int i=0; i<n; i++){
		for (int j=i+1; j<n; j++){
			if (arr[i]+arr[j]==tr){
				printf("Indices of the two numbers whose sum equal to targe value : %d %d\n", i, j);
			}
		}
	}
	return 0;
}
