#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x[3][3] ={{1,2,3},{4,5,6},{7,8,9}};//insialisasi data
	int i,j;
	
	for(i=0;i<3;i++){//for yg pertama
	for(j=0;j<3;j++){//for yg kedua
	printf("%d",x[i][j]);//mencetak isi ray
	}
	printf("\n");//mencetak enter pada baris terahir
	}
	return 0;
}
