#include <stdio.h>

int main(void){
	int a,b,c;
	for (c=500;c<1000;c++){
		for (a=0; 1000-c; a++){
			b = 1000-c-a;
			if ((a*a)+(b*b)==(c*c)){
				printf("x = %d\ny = %d\nz = %d\n%d^2+%d^2=%d",a,b,c);
			}
		}
	}

	return 0;
}
