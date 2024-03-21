#include <stdio.h>

int main(void){
	for (int c=300;c<998;c++){
		for (int a=1; a<1000-c; a++){
			int b;
			b = 1000-c-a;
			if ((a*a)+(b*b)==(c*c)){
				printf("x = %d\ny = %d\nz = %d\n%d^2+%d^2=%d^2\n",a,b,c,a,b,c);
				break;
			}
		}
	}
	return 0;
}
