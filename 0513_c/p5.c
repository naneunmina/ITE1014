#include <stdio.h>

int main(void){
	char arr[1001];
	scanf("%s",arr);
	int cnt[1001] = {0,};
	for (int i=0; arr[i]!='\0';i++){
		for (int j=0; arr[j]!='\0';j++){
			if (arr[i]==arr[j]) cnt[i]++;
		}
	}
	int max=0;
	for (int i=0; arr[i]!='\0';i++){
		if (cnt[max]<cnt[i]) max=i;
	}
	printf("maximum occurring character is : %c\n",arr[max]);
	return 0;
}
