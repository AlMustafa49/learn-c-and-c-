#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
   int i;
   int tab[10]= {1,50 ,6 ,20 ,3 , 100, 30, 8, 99, 100};
   int max;
   int min;
   
   max = tab[0];
   min = tab[0];
   for (i=0; i<10; i++){
       if (tab[i]<min){
           min=tab[i];
           }
       if (tab[i]>max){
           max=tab[i];
           
       }
  
}
printf ("nilai max=%d\n", max);
printf ("nilai min=%d", min);
    return 0;
}
