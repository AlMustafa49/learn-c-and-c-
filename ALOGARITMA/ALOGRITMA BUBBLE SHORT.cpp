#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubbleshort (int arr[], int n){
		int i, j, tmp;
		for(i = 0; i < n; i++){
			for(j=0; j<n-i-1; j++){
				if(arr[j] > arr[j+1]){
					tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}
	
int main() {

		int array [100], n, i, j;
		printf("MASUKKAN BANYAK ELEMEN : ");
		scanf("%d", &n);
		
		printf ("masukkan nilai: \n");
		
		for(i = 0; i < n; i++){
			scanf("%d", &array[i]);
		}
		
		bubbleshort (array, n);
		
		printf("Hasil pengurutan sebagai berikut: \n");
		for(i = 0; i < n; i++){
			printf("%d", array[i]);
		}
		printf ("\n");
     
	 return 0;
	 
	}

		
	
