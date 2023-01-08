#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int penjumlahan (int bil_1, int bil_2){
		return bil_1 + bil_2;
	}
	int pembagian (int bil_1, int bil_2){
		return bil_1 / bil_2;
	}
	int perkalian (int bil_1, int bil_2){
		return bil_1 * bil_2;
	}
	int pengurangan (int bil_1, int bil_2){
		return bil_1 - bil_2;
	}
	
int main() {
	int bil1;
	int bil2;
	int hasil;
	char keluar = 'T';
	char opr = '+';'/';'*';'-';
	
	do {
		printf ("masukkan bilangan 1 = ");
		scanf (" %d", &bil1);
		
		printf ("masukkan bilangan 2 = ");
		scanf (" %d", &bil2);
		
		printf ("masukan operator (+,/,*,-) = ");
		scanf (" %c", &opr);
		
		switch (opr){
		case '+' :
			hasil = penjumlahan(bil1, bil2);
			printf("hasil penjumlahan bil1 + bil2 = %d\n", hasil);
			break;
			
		case '/' :
			hasil = pembagian(bil1, bil2);
			printf("hasil penjumlahan bil1 / bil2 = %d\n", hasil);
			break;
			
		case '*' :
			hasil = perkalian(bil1, bil2);
			printf("hasil penjumlahan bil1 * bil2 = %d\n", hasil);
			break;
			
		case '-' :
			hasil = pengurangan(bil1, bil2);
			printf("hasil penjumlahan bil1 - bil2 = %d\n", hasil);
		    break;
			
		default : 
			printf("operator yg anda masukan tidak di temukan \n");
			
			}
			printf("Apakah ingin melanjutkan ?");
        scanf(" %c",&keluar);
		
			
	} while (keluar== 'Y');

	
	return 0;
}
