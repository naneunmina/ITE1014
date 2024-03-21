#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	for (int i=1; i<=10; i++){
		printf("%d ", (rand()%100));
	}
	printf("\n");
	return 0;
}
