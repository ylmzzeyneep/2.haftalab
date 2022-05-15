#include <stdio.h>
  //deneme1.c
  void fonk(void);
  
  int gid = 287;
  
  int main(void){
  	printf("deneme1.c gid degisken degeri: %d\n", gid);
  	
  	fonk();
  	return 0;
	
   }
   //deneme2.c
   extern int gid;
   
   void fonk(void){
   	printf("deneme2.c gid degisken degeri: %d", gid); 
   	
   }
   
