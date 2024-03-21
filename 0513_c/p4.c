#include <stdio.h>

int main(void){
	char arr[1001];
	scanf("%s",arr);
	int v_cnt=0, c_cnt=0;
	for (int i=0; arr[i]!='\0';i++){
		if (arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'){
			v_cnt++;
		}
		else if (arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
			v_cnt++;
		}
		else c_cnt++;
	}
	printf("number of vowel is : %d\nnumber of consonant is : %d\n",v_cnt,c_cnt);
	return 0;
}
