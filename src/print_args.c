
#include <stdio.h>

void print_args(int argc, char** argv){
	for (int i = 0; i< argc; i++){
		printf("%dth arg is : %s\n", i, argv[i]);
	}
}
