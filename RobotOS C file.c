//Header files//
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h>
#include <pthread.h>


//set up multithreading functions//
void* threadFunction(){//Creates thread1
    
    printf("Thread Created");//Notifys the user that thread1 was sucessfully created
  
}

void* threadFunction2(){//Creates thread2
    
    printf("Thread2 Created");//Notifys the user that thread2 was sucessfully created
  
}
///////////////////////////

//MAIN_FUNCTION//
int main(){

    
    //Create thread ID for lsThread//
pthread_t lsThread;
int ret; 
///

//Create thread for ls command//
ret = pthread_create(&lsThread,NULL,&threadFunction,NULL);

if(ret==0){//if the os returns 0
    printf("ls thread");//print ls thread
     system  ("./shellScriptRecordLs.sh"); //run the shell script that records ls
    
}
else{
    printf("Thread not created"); //if the os dosnt return 0 print Thread not created
 return 0; 
    
}
    
 
   //Create thread ID for topThread//
 pthread_t topThread;
int ret2; 

//Create thread for top command//
ret2 = pthread_create(&topThread,NULL,&threadFunction2,NULL);

if(ret2==0){//if the os returns 0
    printf("\ntop thread\n");// print top thread 
   system  ("./shellScriptRecordTop.sh");//run the shell script that records top
    
}
else{
    printf("\nThread2 not created\n"); //if the os dosnt return 0 print Thread not created
    return 0; 
    
}

 
}
