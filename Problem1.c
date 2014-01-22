#include <stdio.h>

int main(){
	
	int multiplesof3 = 0, multiplesof5 = 0, multiplesof15 = 0;
  	int i;

  	for (i = 0; i < 1000; i++) {
    	if (i % 3 == 0) {
      		multiplesof3 += i;
    	}
    	if (i % 5 == 0) {
     	 	multiplesof5 += i;
    	}
    	if (i % 15 == 0) {
      		multiplesof15 += i;
    	}
  }
  
  printf("Number of multiples of 3 and 5 but not of 15: %d\n", multiplesof3 + multiplesof5 - multiplesof15);

  return 0;
}