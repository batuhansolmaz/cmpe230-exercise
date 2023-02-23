#include "greet.h"
#include "print_args.h"

int main(int argc, char** argv){
	if (argc == 1) return 0;
	if (argc == 2)
		greet(argv[1]);
	else 
		print_args(argc, argv);
	return 0;

}
