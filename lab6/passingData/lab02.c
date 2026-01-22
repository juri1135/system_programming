#include <stdio.h>

int add(int x, int y);

int call_add(int x, int y){
	return add(x,y);
}

int main(void){
	int ret=call_add(1,2);
	printf("%d\n",ret);
	return 0;
}
