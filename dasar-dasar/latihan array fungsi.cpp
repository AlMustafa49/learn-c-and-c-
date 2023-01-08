#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
char keluar = 'Y';
    char opr = '+';
    do {
        printf("Masukan operator (+ , -, *, /) = "); 
        scanf("%c",&opr);
        printf("Operator yang anda pilih adalah %c\n", opr);
        
        printf("Apakah ingin melanjutkan ?");
        scanf("%c",&keluar);
        
    } while(keluar == 'T');
}

