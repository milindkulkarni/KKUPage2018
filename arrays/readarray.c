#include <stdio.h>
#include <stdlib.h>

int * readArray(char * filename, int * numels) {
	FILE * fp = fopen(filename, "r");
	fscanf(fp, "%d", numels);
	
	int * retval = malloc(sizeof(int) * (* numels));
	for (int i = 0; i < * numels; i++) {
		fscanf(fp, "%d", &(retval[i]));
	}
	
	return retval;
}

#ifdef TEST_READARRAY

int main (int argc, char ** argv) {
	if (argc < 2) exit(1);
	
	int numels = 0;
	
	int * arr = readArray(argv[1], &numels);
	
	for (int i = 0; i < numels; i++) {
		printf("arr[%d]: %d\n", i, arr[i]);
	}
	
	return 0;
}

#endif