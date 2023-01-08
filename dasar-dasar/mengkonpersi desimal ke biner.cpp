#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int n,i=1;
	int j;
	int biner[10];
	
	printf("Masukan bilangan : ");
	scanf(" %d",&n);
	while(n>0)
	{
		biner [i]=n%2;
		n=n/2;
		i=i+1;
		
		
	}
	for(j=i-1; j>0; j--)
	{
		printf("%d", biner[j]);
	}
	return 0;
}
