#include <types.h>
#include <lib.h>
#include <test.h>

int mytest(int nargs, char **args){
	kprintf("My test works!");
	return 0; //Menu thinks there's an error without a 0 return
}

