#include <stdio.h>
#include <stdlib.h>

typedef struct book{
		char ti[20];
		char au[20];
		int pg;
} Book;

int main(void){
	Book *arr[3];
	for (int i=0; i< sizeof(arr)/sizeof(Book *); i++){
		arr[i] = malloc(sizeof(Book));
	}
	for (int i=0; i<3; i++){
		scanf("%s",arr[i] -> ti);
		scanf("%s",arr[i] -> au);
		scanf("%d",&arr[i] -> pg);
	}
	for (int i=0; i<3; i++){
		printf("%d번째 책 : %s %s %d\n",i+1, arr[i] -> ti, arr[i] -> au, arr[i] -> pg);
	}
	return 0;
}
