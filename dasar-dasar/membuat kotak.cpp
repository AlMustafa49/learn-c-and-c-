#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int i;
	int j;
	
	for (i=0; i<10; i++){
		
		for(j=0; j<10; j++){
			if(i==0 || i==9){
				printf("*");
			}
			
			else{
			
		//printf(" ");
		
				if(j==0 || j==9){
				printf("*");
				}
				else{
						printf(" ");
					}
			
				
			}
		
		}	
		printf("\n");
	}
	
	return 0;
}
