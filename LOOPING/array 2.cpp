#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int total = 0;
	int j = 0;
	printf ("masukan jumlah array :");
	scanf("%d", &j);
	
	int x [j];
	for (int i=0; i<j; i++){
		x[i] = i;
	}
	
	for (int i=0; i<j;i++){
		total = total + x[i];
		printf("total pada saat ke-%d = %d \n", i, total);
	}
	return 0;
}
