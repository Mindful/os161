<<<<<<< HEAD
#include <types.h>
=======
>>>>>>> ed825a57a7c03333b23f79228226c495243695ef
#include <kern/errno.h>
#include <lib.h>
#include <limits.h>
#include <syscall.h>

/////////////////////////////
<<<<<<< HEAD
////
//// Because write returns the number of bytes written, all
////  bad returns are the ordinary MAGNITUDE for the error,
////  but are always NEGATIVE
////
=======
//
// Because write returns the number of bytes written, all
//  bad returns are the ordinary MAGNITUDE for the error,
//  but are always NEGATIVE
//
>>>>>>> ed825a57a7c03333b23f79228226c495243695ef


int sys_write(int filehandle, const void *buf, size_t size){
	if (size > KBUF_MAX){
<<<<<<< HEAD
	    return -(EINVAL);
  	}
	if (filehandle == 1 /* STDOUT_FILENO is undefined in kernel space, but it's probably going to remain '1' forever hehehe */){
		 kprintf(buf);
	 	 return size;
  	}
	    			 	   	   
  	return -(EBADF);
=======
    return -(EINVAL);
	}
	if (filehandle == 1 /* STDOUT_FILENO is undefined in kernel space, but it's probably going to remain '1' forever hehehe */){
	 kprintf(buf);
	 return size;
  	}
   
	return -(EBADF);
>>>>>>> ed825a57a7c03333b23f79228226c495243695ef
}
