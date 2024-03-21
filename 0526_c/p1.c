#include <stdio.h>

int main(void){
	char arr[5000];
	scanf("%c",arr[]);
	int i=0,j=0,k=0;
	int word[][];
	int num[]={0,};
	while (arr[i]!='\0'){
		if (arr[i]==','||arr[i]=='?'||arr[i]=='?')
		if (arr[i]==' '){
			for (int l=0; l<j; l++){
				if (word[j]==word[l]){
					nu
					num[l]++;
				}
				else {
					num[j]++;
				}
			}
			j++;
			k=0;
		}
		else {
			word[j][k]=arr[i];
			k++;
		}
		i++;
	}
	j=0;
	k=0;
	while (word[j]!='\0'){
		if (num[j]!=0){
			while (word[j][k]!='\0'){
				printf("%s",word[j][k]);
				k++;
			}
			printf("%d\n",num[j]+1);
			j++;
			k=0;
		}
	}
	return 0;
}