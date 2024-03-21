#include <stdio.h>

char arr[1000]={0,};
int num;
char grade;
void insert(int num, char grade){
	arr[num]=grade;
}

void remo(int num){
	arr[num]=0;
}

int serch(int num){
	if (arr[num]==0){
		printf("-1\n");
	}
	else{
		printf("%d %c\n",num,arr[num]);
	}
}

int main(void){
	char menu;
	scanf("%s", &menu);
	while (menu !='Q'){
		if (menu=='i'){
			scanf("%d %s",&num,&grade);
			insert(num,grade);
		}
		if (menu=='r'){
		int num;
		scanf("%d",&num);
		remo(num);
		}
		if (menu=='s'){
		int num;
		scanf("%d",&num);
		serch(num);
		}
		scanf("%s", &menu);
	}
	for(int i=0; i<100; i++){
        if(arr[i]!=0 && arr[i]!=-1){
        	printf("%d",i);
            printf(" %c\n",arr[i]);
		}
	}
	return 0;
}
