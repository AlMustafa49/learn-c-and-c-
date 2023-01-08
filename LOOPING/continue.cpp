#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a = 10;
	 do {
	 	if(a == 15) {
	 		a + a + 1;
	 		continue;
		 }
		 printf("nilai dari a: %d\n", a);
		 a++;
	 } while ( a < 20 );
	 
	return 0;
}
