//#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
/*
void replace(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}
*/

//4

//5
/*void printTextFromPtr(char *ptr, int length){

    for(int i = 0; i < length; i++){
        printf("%c", ptr[i]);
    }
}
*/

//6
/*
void function(int *ptr, int len){
    for(int i = 0; i < len; i++){
        ptr[i] = i*i;
        printf("\t%d", ptr[i]);
    }
}
*/

//7
/*
float *maxPtr(float *numbers, int length){
    float *maxPtr = numbers;
    printf("%d\n",maxPtr);
    for(int i = 0; i < length; i++){
        if(numbers[i] > *maxPtr){
            maxPtr = &numbers[i];
        }
            printf("%.1f\n",numbers[i]);
    }

    return maxPtr;
}
*/

//8
/*
int **functionInit(int N, int M){
    int **tab = (int **)malloc(N * sizeof(int *));
    for(int i = 0; i < N; i++){
        tab[i] = (int *)malloc(M * sizeof(int));
    }
    for (int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            tab[i][j] = i * M + j + 1;
            //8.1 int random = rand() % 9 + 1;
            //8.1 tab[i][j] = random;
        }
    }
    return tab;
}
void functionPrint(int **tab, int N, int M){
    for (int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                printf("%2d\t", tab[i][j]);
            }
            printf("\n");
        }
}
*/
/*
struct Point2D{
    int x;
    int y;
};
*/

//2
/*struct Point{
    int x;
    int y;
};

float distance2D(struct Point p1, struct Point p2){
    float d = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
    return d;
}
*/

//3
struct Point2D{
    int x;
    int y;
};
float distance2D(struct Point2D p1, struct Point2D p2){
    //if (p1.x == p2.x && p1.y == p2.y) {
    //    return 0.0;
    //} nie jest wymagane przy length - 1 w path2D
    float d = sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
    return d;
}
float path2D(struct Point2D ps[], int length){
    float sum = 0.0;
    for(int i = 0; i < length - 1; i++){
        sum += distance2D(ps[i], ps[i + 1]);
    }
        return sum;
}
int main(){ 
    //3
    struct Point2D myPoints[] = {{1,1},{1,1},{1,1}};
    float totalDistance = path2D(myPoints, sizeof(myPoints)/sizeof(myPoints[0]));
    printf("%.2f", totalDistance);


    //2
    /*
    struct Point myPoint1 = {2, 2};
    struct Point myPoint2 = {5, 5};

    float result = distance2D(myPoint1, myPoint2);
    printf("Odleglosc %.2f\n", result);
    */

    /*
    struct Point2D myPoint;

    myPoint.x = 3;
    myPoint.y = 4;

    printf("Punkt w 2D: %d %d", myPoint.x, myPoint.y);
*/

    //8
    /*
    int N = 2;
    int M = 3;
    int **tab = functionInit(N, M);
    functionPrint(tab, N, M);
    for(int i = 0; i<N; i++){
        free(tab[i]);
    }
    free(tab);
    */
    //7
    /*
    float tab[] = {4.3, 1.2, 7.2, 3.9, 0.6, 8.5, 1.6};
    int length = sizeof(tab) / sizeof(tab[0]);

    float *maxElPtr = maxPtr(tab, length);

    if(maxElPtr != NULL){
        printf("Najwieksza wartosc w tablicy: %.1f\n", *maxElPtr);
    }else{
        printf("Dlugosc tablicy jest niepoprawna\n");
    }

    int b = 1;
    int *a;
    a = &b;
    printf("%d\n",b);
    printf("%d\n",&b);
    printf("%d\n",a);
    printf("%d\n",*a);
    */


    //6
    /*
    int len = 5;
    int *tab;
    tab = (int *)malloc(len * sizeof(int));
    function(tab, len);
    free(tab);
    */


    //5
    /*
    char text[] = "Hellow world";
    int length = 5;

    printTextFromPtr(text, length);
    */


    //4
    /*
    int N = 6;
    int *tab_1D;
    tab_1D = (int *)malloc(N * sizeof(int));
    for(int i = 0; i < N; i++){
        tab_1D[i] = i+1;
        printf("\t%i", tab_1D[i]);
    }
    free(tab_1D);
    */

    //3
    /*
    int d = 5;
    int e = 10;

    int *a = &d;
    int *b = &e;

    printf("Wartosci przed zmiana: a=%d\tb=%d\n", *a, *b);
    replace(a, b);
    printf("Wartosci po zmianie: a=%d\tb=%d", *a, *b);
    */


    //2
/*
    int x = 42;
    int *ptr1 = &x;
    int *ptr2 = NULL;

    printPtr(ptr1);
    printPtr(ptr2);
*/
    //1
/*
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