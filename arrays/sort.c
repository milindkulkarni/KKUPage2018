#include <stdio.h>
#include <stdlib.h>
#include "readarray.c"

int main() {
	int size;
	int * a = readArray("u.txt", &size);
		
	int q = 0;
	
	for (int i = 0; i < size; i = i + 1) {
		printf("a[%d] = %d\n", i, a[i]);
	}	
	
	for (q = 0 ; q < size; q++) {
		int guess = a[q];
		int x = q;
			
		for (int i = q; i < size; i++) {
			if (guess > a[i]) {
				guess = a[i];
				x = i;
			}
			int t = a[q];
			a[q] = a[x];
			a[x] = t;
		}	
	}
	
	for (int i = 0; i < size; i = i + 1) {
		printf("a[%d] = %d\n", i, a[i]);
	}
	
	
	return 0;
}