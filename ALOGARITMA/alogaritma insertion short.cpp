#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n, i, j, tmp;
	j=10;
	printf("nilai j %d\n",j--);
	//printf("%d",j--);

	printf("masukkan jumlah banyak data: ");
	scanf(" %d", &n);
	int array[n];
	printf ("masukkan %d angka integer\n", n);
	
	for(i = 0; i < n; i++){
		scanf(" %d", &array[i]);
	}
	
	for(i = 1; i <= n; i++){
		j = i;
		while(j > 0 && array[j-1] > array[j]){
			tmp = array[j];
			array[j] = array[j-1];
			array[j-1] = tmp;
			
			j--;
		}
	} 
	
	printf("hasil pengurutan sebagai berikut; \n");
	
	for (i = 0; i <= n-1; i++){
	printf ("%d ", array[i]);
	}
	printf("\n");
	
	return 0;
}
