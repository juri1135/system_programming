#include <stdio.h>

int main(void){
	float inf, nan;
	*((int*) &inf)=0b01111111100000000000000000000000;
	*((int*) &nan)=0b01111111100000000000000000000001;
	//bitdustksgkrh tlvdjtj int wkfldp anjf wlqdjsjgdmfksmsep anjs thfldla tqtq
	//bit
	printf("%d\n", nan<nan);
	printf("%d\n", nan>nan);
	printf("%d\n", nan==nan);
	printf("%d\n", inf>nan);
	printf("%d\n", inf<nan);
	printf("%d\n", inf==nan);
	printf("%d\n", inf<inf);
	printf("%d\n", inf>inf);
	printf("%d\n", inf==inf);
	//nandms emfdjrkaus ek rjwltdmfh vksqufgka
	return 0;
}
