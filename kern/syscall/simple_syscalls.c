//The file for simple custom system calls, like our hello world system 
//call

#include <types.h>
#include <copyinout.h>
#include <syscall.h>
#include <lib.h>

int sys_helloworld(void){
	kprintf("HELLO world\n");
	return 0;
}

void sys__exit(int code){
  thread_exit();
}

int sys_printint(int tp){
  int len = 0;
  int tmp;
  int neg = 0;
  

  // kprintf("tp = %d\n", tp);

  if (tp < 0) { 
	  tp = tp - (2 * tp);
	  neg = 1;
  }

  for (tmp = tp; tmp > 0; --tmp){
    ++len;
  }
  if (neg)
	  ++len;
  
  // kprintf("len = %d; attempting kmalloc\n", len);
  char istr[len];
  
  if (!istr)
	  panic("memory allocation failed");

  // kprintf("attempting sign storage\n");
  if (neg){
    istr[tmp] = '-';
	 ++tmp;
  }

  // kprintf("constructing string\n");
  while( tp > 0 ){
   istr[tmp] = '0' + (tp % 10);
	tp = tp / 10;
	++tmp;
  }
 
  // kprintf("printing string\n");
  return kprintf(istr);
}
