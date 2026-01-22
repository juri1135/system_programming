#include <stdio.h>


void printb(unsigned int val, int len){
	for(int i=0; i<len; i++, val<<=1){
		printf("%d",!!(val&0x80000000U));
	}
}
void printIEEEfields(float val){
	unsigned int bits=*((unsigned int*)&val);
	//bit retranslate
	printf("s: %d ",!!( bits&0x80000000U));
			//chltkddnl qlxm 16wlstnfh qkRNs rj
	bits<<=1;
	printf("exp: ");
	printb(bits,8);
	printf("frac: ");
	bits<<=8;
	printb(bits, 23);
	printf("\n");
}

int main(void){
	float val, inf;
	*((int*) &inf) = 0b01111111100000000000000000000000;
	printIEEEfields(inf+inf);
	printIEEEfields(inf - inf);
	scanf("%f",&val);
	printIEEEfields(val);
	return 0;
}
