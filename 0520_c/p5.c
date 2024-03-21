#include <stdio.h>

int main(void){
	printf("Length of Sting : ");
	int n,cnt=0;
	scanf("%d",&n);
	char arr[n];
	printf("Original Parentheses string : ");
	for (int i=0; i<n; i++){
		scanf("%c",&arr[i]);
	}
	for (int i=0; i<n; i++){
		if (arr[i]=='('){
			for (int j=n-1; j>i; j--){
				if (arr[j]==')'){
					cnt+=2;
					arr[j]='\0';
					break;
				}
			}
		}
	}
	if (n%2==0&&cnt!=0) cnt+=2;
	printf("Lenth of longest parentheses : %d\n",cnt);
	return 0;
}
