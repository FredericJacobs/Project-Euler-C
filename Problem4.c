#include <stdio.h>

int reverseInt(int n){
	unsigned int reversed = 0, t = n;

	while (t) {
    	reversed = 10*reversed + (t % 10);
    	t /= 10;
  	}

  	return reversed;
}

int isPalindrome (int n){
  	return reverseInt(n) == n;
}

int main(void)
{
	int biggestPalindrome = 0;
	for (int i = 0; i < 1000; i++){
		for (int j = 0; j < 1000; j++){
			int b = i*j;
			if (b > biggestPalindrome && isPalindrome(b))
			{
				biggestPalindrome = b;

				printf("%i \n", biggestPalindrome );
			}
		}
	}
}

