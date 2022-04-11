#include <stdio.h>

int main() {
	int array[5];
	int *ptr = array;
	int v = 2;

	for(*ptr=&array[0];ptr<&array[5];ptr++){
		*ptr = v;
		printf("ptr is %x and value v is %d\n", ptr, v);
		v = v * 2;
		}
	int i;
	printf("[");
	for(i=0;i<5;i++){
		printf("%d  ", array[i]);
	}
	printf("]");
}
