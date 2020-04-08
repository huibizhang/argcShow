#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++) {
	    printf("[%d] %s \n", i, argv[i]);
	}
	printf("\n\n");
	system("Pause");
	  
	return 0;
}
