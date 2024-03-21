#include <stdio.h>

int main(void){
	char arr[1001];
	scanf("%s",arr);
	int i =0;
	int cnt = 0;
	while (arr[i]!='\0') {
		cnt++;
		i++;
	}
	printf("%d\n",cnt);
	return 0;
}