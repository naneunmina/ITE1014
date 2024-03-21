#include <stdio.h>

int main(void){
	char arr1[1001],arr2[1001];
	printf("Input the 1st string : ");
	scanf("%s",arr1);
	printf("Input the 2nd string : ");
	scanf("%s",arr2);
	int i =0;
	int cnt =0;
	while (arr1[i]!='\0'){
		if (arr1[i]!=arr2[i]) cnt++;
		i++;
	}
	if (cnt==0) printf("-> Strings are equal.\n");
	else printf("-> Strings are not equal.\n");
	return 0;
}
