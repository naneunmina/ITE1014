#include <stdio.h>

void printArray(char* arr,int n){
	int i;
	for (i=0; i<n; i++) printf("%c",arr[i]);
	printf("\n");
}

int main(void){
	int n;
	printf("n : ");
	scanf("%d",&n);
	char arr[n+1];
	scanf("%s",arr);
	printArray(arr,n);
	return 0;
}
