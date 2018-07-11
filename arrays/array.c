#include <stdio.h>
#include <stdlib.h>
#include "readarray.c"

int main() {
	int size1, size2;
	int * a = readArray("a.txt", &size1);
	int * b = readArray("b.txt", &size2);
	
	if (size1 != size2) {
		printf("Array sizes not the same!\n");
		return 1;
	}
	
	//DOT PRODUCT HERE
	
	return 0;
}