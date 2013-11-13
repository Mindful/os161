#include <types.h>
#include <lib.h>
#include <test.h>
#include <thread.h>

void thread_function(void *ptr, unsigned long value){
	char* name = ptr;
	//This is just the ugliest thing. Using void values generates compile
	//errors, but we can use the memory location of a void value and pretend
	//that it's a char pointer, because we know in this case it will be
	kprintf(name);
}

int mytest(int nargs, char **args){
	kprintf("My test works!");
	for (int i = 0; i < nargs; i++){
		kprintf(args[i]);
		kprintf("\n");
	}
	//thread_fork can take a null process; it defaults to the current one
	thread_fork("test thread", NULL, thread_function, "test thread", nargs);
	return 0; //Menu thinks there's an error without a 0 return
}

