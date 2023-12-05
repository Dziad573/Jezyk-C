#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

#define STALA 20
#define MAKRO (a/20)

int main()
{
    int a = 10, b = 067, c = 0xAF;
    char znak = 'A', znak2 = 66;
    float liczba = 0.473852f;
    double liczba2 = 2.75;
    char lan[80] = "Ala ma kota";
    char lan2[] = " Dzis jest deszczowy dzien";
    int liczby[] = { 1,2,3,4 };
    printf("%d",a);
    printf("%d", a);
    printf(lan2);

    printf("a = %d\n", a);
    printf("%s\n", lan2);

    puts(lan);

    printf("Podaj liczbe: ");
    scanf("%d", &a);
    printf("a = %d a + 20 = %d, a + a/20=%d\n", a, a+STALA, a+MAKRO);
    
    return 0;
    
}