#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int i;
    int j;
    //int banyak;
    for(i=1; i<10; i++)
    {
        for(j=1; j<10; j++)
        {
            if (j==i)
            {
                printf("*");
            }
            else
            {
            
                
                if (j+i == (10))
                {
                	printf("*");
				}
				else
				{
					printf(" ");
				}
            }
        }
        printf("\n");
    }
    return 0;
}

