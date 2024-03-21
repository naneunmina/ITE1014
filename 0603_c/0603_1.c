#include <stdio.h>

typedef struct book{
		char ti[20];
		char au[20];
		int pg;
	} Book;

int main(void){
	Book arr[3];
	for (int i=0; i<3; i++){
		scanf("%s",arr[i].ti);
		scanf("%s",arr[i].au);
		scanf("%d",&arr[i].pg);
	}
	for (int i=0; i<3; i++){
		int j=0;
		printf("%d번째 책 : ",i+1);
		while (arr[i].ti[j]!='\0'){
			printf("%c", arr[i].ti[j]);
			j++;
		}
		printf(" ");
		j=0;
		while (arr[i].au[j]!='\0'){
			printf("%c", arr[i].au[j]);
			j++;
		}
		printf(" %d\n", arr[i].pg);
	}
	return 0;
}
