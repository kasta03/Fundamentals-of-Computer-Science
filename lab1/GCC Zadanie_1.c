#include <stdio.h>

int main(void){
    int i1 = -100, i2 = -200;
    int i3;

    short s1;
    short int s2;

    long l1;
    long int l2;

    long long L1;
    long long int L2;

    unsigned u1;
    unsigned int u2;

    i3 = 2*i2-i1;
    printf("Przykladowe liczby calkowite: %d, %d, %d oraz %d, %d.\n\n", i1, i2, i3, i1/i2, -600);
    i3 = 64;
    printf("Dziesietne %d to w systemie osemkowym %o, a w systemie szesnastkowym: %x.\n", i3, i3, i3);
    printf("Dziesietne %d to w systemie osemkowym %#o, a w systemie szesnastkowym: %#x.\n\n", i3, i3, i3);

    s1 = 32767;
    s2 = s1+1;
    printf("s1+1 = %d+1 = %d\n\n", s1, s2);

    return 0;
}
