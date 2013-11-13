#include <types.h>
#include <lib.h>
#include <test.h>

int mytest(int nargs, char **args){
	kprintf("My test works!");
	for (int i = 0; i < nargs; i++){
		kprintf(args[i]);
		kprintf("\n");
	}
	return 0; //Menu thinks there's an error without a 0 return
}

