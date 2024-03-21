#include <stdio.h>
#include<math.h>

int main(void){
	int arr[10000];
	int cnt=0;
	for (int i=2; i<=10000; i++){
		arr[i]=i;
	}
	for (int i=2; i<sqrt(10000); i++){
		if (arr[i]==0) continue;
		for (int j=2*i;j<=10000;j+=i){
			arr[j]=0;
		}
	}
	for (int i=2;i<=10000;i++){
		if (arr[i]!=0) cnt+=arr[i];
	}
	printf("%d\n",cnt);
	return 0;
}
