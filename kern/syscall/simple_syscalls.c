//The file for simple custom system calls, like our hello world system 
//call

#include <types.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>

int sys_helloworld(void){
	kprintf("HELLO world");
	return 0;
}
