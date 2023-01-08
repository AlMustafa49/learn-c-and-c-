#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int nilai,hasil;
	
	printf("Masukkan bilangan: ");
	scanf("%d", & nilai);
	printf("Masukan jumlah perkalian: ");
	scanf("%d", & nilai);
	printf("\n");
	
	for (int i=1;i<=9;i++)
	{
		hasil = nilai * i;
		printf("%d", nilai);
		printf(" x ");
		printf("%d", i);
		printf(" = %d", hasil);
		printf("\n");
		
	}
	
	
	return 0;
}
