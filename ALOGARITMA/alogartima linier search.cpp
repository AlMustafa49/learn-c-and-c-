#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void selection(int data[], int banyak);
void input(int data[], int banyak);
void output(int data[], int banyak);

int main() {
	printf("SORTING MENGGUNAKAN SELECTION SHORT\n");
	
	int data [50];
	int banyak;
	printf("input batas datanya: ");
	scanf("%d", &banyak);
	input (data,banyak);
	puts("\ndata sebelum di sorting: ");
	output(data, banyak);
	puts("\ndata sesudah di sorting: ");
	selection(data,banyak);
	output(data,banyak);
	
	
	return 0;
}

void selection (int data[], int banyak){
	
	int i,j,index;
	int temp=0;
	for(i=0;i<banyak;i++){
		index=i;
		for(j=i;j<banyak;j++){
			if(data[index]>data[j]){
				index=j;
				
			}
		}
		temp=data[index];
		data[index]=data[i];
		data[i]=temp;
		
	}
}

void input (int data [],int banyak){
	int i;
	for(i=0;i<banyak;i++){
		printf("input indeks %d = ",i+1);
		scanf("%d", &data[i]);
	}
	
}
void output(int data[], int banyak){
	int i;
	for (i=0;i<banyak;i++){
		printf("%d ", data [i]);
		
	}
	
}
