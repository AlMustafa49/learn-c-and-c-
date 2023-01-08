#include <iostream>

float tinggi,berat,bmi;

int main()
{
    printf("MENGHITUNG BERAT BADAN IDEAL\n");
    printf("masukkan tinggi badan anda (m) : ");
    scanf("%f", &tinggi);
    printf("masukkan berat badan anda (kg) : ");
    scanf("%f", &berat);
    
    bmi = berat / (tinggi*tinggi);
    printf("bmi/t/t/t/t: %.2f\n", bmi);
    printf("keterangan :\n");
    if (bmi<18)
    {
        printf("KURUS");
    }
    else if(bmi>=18 && bmi<=25)
    {
        printf("NORMAL");
    }
    else if(bmi>=26 && bmi<=27)
    {
        printf("GEMUK");
    }
    else if(bmi > 27)
    {
        printf("obesitas - anda harus mengurangi makanan berlemak dan mulai berolahraga");
    }
    
    

   
    return 0;
}
