#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int jumlah(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}
	int perkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
	
}
int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
	
}
int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
	
}

int main() {
	int bil1;
	int bil2;
	int hasil;
	char keluar = 'T';
    char opr = '+';'*';'-';'/';
    
    
    
    do {
    	printf("masukan bilangan 1 = ");
    	scanf(" %d",&bil1);
    	
    	printf("masukan bilangan 2 = ");
    	scanf(" %d",&bil2);
    	
        printf("Masukan operator (+ , -, *, /) = "); 
        scanf(" %c",&opr);
        
        if (opr=='+'){
        	hasil = jumlah(bil1, bil2);
        	printf ("hasil penjumlahan bil1 + bil2 = %d\n", hasil);
}
        if (opr=='*'){
        	hasil = perkalian(bil1, bil2);
        	printf ("hasil perkalian bil1 x bil2 = %d\n", hasil);
		}
        
         if (opr=='-'){
        	hasil = pengurangan(bil1, bil2);
        	printf ("hasil perkalian bil1 x bil2 = %d\n", hasil);
		}
        
         if (opr=='/'){
        	hasil = pembagian(bil1, bil2);
        	printf ("hasil perkalian bil1 x bil2 = %d\n", hasil);
		}
        
        printf("Apakah ingin melanjutkan ?");
        scanf(" %c",&keluar);
        
    } while(keluar == 'Y');

	return 0;
}
