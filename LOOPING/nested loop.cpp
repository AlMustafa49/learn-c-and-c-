#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i, j;
	
	for(i = 2; i<100; i++) {
	
	for(j = 2; j <= (i/j); j++) {
		if(!(i%j)) break;
	}
	
	if(j > (i/j)) printf("%d is prime\n", i);
		
	}
	
	
	
	return 0;
}
