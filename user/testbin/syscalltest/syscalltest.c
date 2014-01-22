#include <sys/types.h>
#include <unistd.h>
#include <err.h>
#include <sys/stat.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <err.h>



int main(){
  helloworld();

  //test printint
  for (int i=-10; i < 200; i += 20){
    printint(i);
  }
}
