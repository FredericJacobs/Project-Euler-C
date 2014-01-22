#include <stdio.h>

long sumFibUnevenUntil(int n)
{
    unsigned int a1 = 1;
    unsigned int a2 = 1;
    unsigned int a3 = 2;
    unsigned int sumAll = 0;
    while (a3 < n) {
      a3 = a1 + a2; 
      
      sumAll += a3*!(a3%2);

      a1 = a2;
      a2 = a3;
    }
    return sumAll;
} 

int main(){

  printf("%lu", sumFibUnevenUntil(4000000));
	
  return 0;
}