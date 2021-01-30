#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h>


int main(){


printf ("Running C file");




fork();//thread 1 starts script 1
printf("Getting top data \n");
system  ("./shellScriptRecordTop.sh"); //run script to get top data

fork();
printf("Getting ls data \n");
system  ("./shellScriptRecordLs.sh"); //run script to get ls data


}
 

