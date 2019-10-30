#include <stdio.h>
int main(void)
{
    float nuts, nuas, na;
    printf("Masukkan Nilai UTS = ");
    scanf("%f", &nuts);
    if(nuts>70)
    {
    na = nuts;
    printf("Nilai Akhir = %.1f\n",na);
    printf("LULUS");
    }else{
    printf("Masukkan Nilai UAS = ");
    scanf("%f", &nuas);
    na = (nuts * 0.4) + (nuas * 0.6);
    printf("Nilai Akhir = %.1f\n",na);
    }if(na>=60)
    printf("LULUS");
    else
    printf("TIDAK LULUS");
    return 0;
}
