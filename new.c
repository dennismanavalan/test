# include <stdio.h>

int main() {
	int x = 7;
	printf("x is %d\n", x);

	int *ptr = &x;
	printf("ptr is %x\n", ptr);
	printf("x from pointer is %d\n", *ptr);
	
	*ptr = 10;
	printf("x is %d and pointer value is %d\n", x, *ptr);
	return 0;
	
}
