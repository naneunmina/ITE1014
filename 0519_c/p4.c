#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int arr[3] ={10,};
	arr[0] = (rand()%9);
	for (int i=1; i<3; i++){
		arr[i] = (rand()%9);
		for (int j=0; j<3; j++){
			if (i==j) continue;
			while (arr[i]==arr[j]){
				arr[i] = (rand()%9);
			}
		}
	}
	int s=0,b=0;
	printf("게임 시작!\n");
	while (s!=3) {
		s=0;
		b=0;
		int user[3];
		printf("3개 숫자를 선택하시오 : ");
		for (int i=0; i<3; i++){
			scanf("%d",&user[i]);
		}
		for (int i=0; i<3; i++){
			if (user[i]==arr[i]) s++;
		}
		if (user[0]==arr[1]||user[0]==arr[2]) b++;
		if (user[1]==arr[0]||user[1]==arr[2]) b++;
		if (user[2]==arr[0]||user[2]==arr[1]) b++;
		printf("이번 결과는 %d strike %d ball 입니다.\n",s,b);
	}
	printf("게임 끝\n");
	return 0;
}
