//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//#define STALA 20
//#define MAKRO (a/20)
//2
/*void printPtr(int *ptr){
    if(ptr == NULL){
        printf("brak przydzielonej pamieci\n");
    }else{
        printf("%zu\n", *ptr);
    }
}*/
//3
void replace(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
int main()
{
    //3
    int d = 5;
    int e = 10;

    int *a = &d;
    int *b = &e;

    printf("Wartosci przed zmiana: a=%d\tb=%d\n", *a, *b);
    replace(a, b);
    printf("Wartosci po zmianie: a=%d\tb=%d", *a, *b);


    //2
/*
    int x = 42;
    int *ptr1 = &x;
    int *ptr2 = NULL;

    printPtr(ptr1);
    printPtr(ptr2);
*/


    /*printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof(int*));
    printf("%zu\n", sizeof(long int));
    printf("%zu\n", sizeof(float));
    printf("%zu\n", sizeof(double));
    printf("%zu\n", sizeof(int**));*/


    /*int N = 5;
    int M = 8;
    int i;
    int *tab_1, *tab_2;

    tab_1 = (int *)malloc(N * sizeof(int));
    tab_2 = (int *)calloc(N, sizeof(int));

    printf("tab_1: ");
    for(i=0; i<N; i++){
        printf("%i\t", tab_1[i]);
    }
    printf("\ntab_2: ");
    for(i=0; i<N; i++){
        printf("%i\t", tab_2[i]);
    }
    printf("\ntab_2(po zmianie): ");
    for(i=0; i<N; i++){
        tab_2[i] = i + 1;
        printf("%i\t", tab_2[i]);
    }

    tab_2 = realloc(tab_2, M * sizeof(int));
    printf("\ntab_2(po rozszerzeniu): ");
    for(i=0; i<M; i++){
        printf("%i\t", tab_2[i]);
    }
    free(tab_1);
    free(tab_2);*/




    /*int i,j;
    int tab_1[10];
    const N = 10;
    int tab_2[N];
    int tab_3[5] = {1,2,3,4,5};
    int tab_4[] = {1,2,3};
    int tab_5[2][3] = {{1,2,3},{4,5,6}};
    int tab_6[][2] = {{1,2}, {3,4}, {5,6}};
    printf("Prawy dolny el.tab_5 %i\n", tab_5[1][2]);
    printf("Prawy dolny el.tab_6 %i\n", tab_6[2][1]);

    printf("\nTablica tab_6:\n");
    for (i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%i\t", tab_6[i][j]);
        }
        printf("\n");
    }
    printf("\nTablica tab_6:\n");
    for (i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("%i\t", *(*(tab_6 + i) + j));
        }
        printf("\n");
    }
    printf("\nTablica tab_6:\n");
    for (i=0; i<3; i++){
        for(j=0; j<2; j++){
            printf("tab_6[%i][%i] = %i\n", i, j, tab_6[i][j]);
        }
        printf("\n");
    }


    return 0;*/



    /*int a = 7;
    int *wsk_a = &a;

    printf("Zmienna a: %i\n", a);
    printf("Adres a: %p\n", wsk_a);
    printf("Zmienna a: %i\n", *wsk_a);

    return 0;*/



    /*int a = 10, b = 067, c = 0xAF;
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
    */
    return 0;
    
}