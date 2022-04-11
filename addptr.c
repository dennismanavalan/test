# include<stdio.h>



int add(int varC) {
	int result;
	int varA;
	int varB = 3;
	//int varC = 7;
	int *varB_p = &varB;
	varA = varC + *varB_p;
	printf("address of varB: %x\n", varB_p);
	printf("varA = %d\n", varA);
	*varB_p = 10;
	varA = varC + *varB_p;
	printf("address of varB: %x\n", varB_p);
	printf("varA = %d\n", varA);
	return 0;
}
void main(){
	printf("%d\n", add(7));
}
