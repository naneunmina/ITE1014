#include <stdio.h>

int main(){
	char arr[1001];
	scanf("%s",arr);
	for (int i=0; arr[i]!='\0'; i++){
		if (arr[i]>='A'&&arr[i]<='Z'){
			printf("%c", arr[i]+32);
		}
		else if (arr[i]>='a'&&arr[i]<='z'){
			printf("%c", arr[i]-32);
		}
	}
	printf("\n");
	return 0;
}
