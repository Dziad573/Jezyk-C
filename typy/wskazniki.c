#include <stdio.h>
//1

/*
    //2

void printPtr(int *ptr){
    if(ptr == NULL){
        printf("brak przydzielonej pamieci");
    }else{
        printf("%d\n", *ptr);
    }

}
*/

/*
    //3

void replace(int *a, int *b){
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
*/

    //4
/*
#include <stdlib.h>
*/

    //5
/*
void printTextFromPtr(char *ptr, int length){
    for(int i=0; i<length; i++){
        printf("%c", ptr[i]);
    }
}
*/

    //6
/*
#include <stdlib.h>
void function(int *tab, int len){
    for(int i=0; i<len; i++){
        tab[i] = i * i;
        printf("%d\t", tab[i]);
    }
}
*/

    //7
float *maxPtr(float *numbers, int length){
    
}

int main(){

    //7


/*
    //6
    int len;
    scanf("%d", &len);
    int *tab;
    tab = (int *)malloc(len * sizeof(int));
    function(tab, len);
*/

/*
    //5
    int length;
    scanf("%d", &length);
    char *c = "bagagaganobagno";
    printTextFromPtr(c, length);
*/

/*
    //4
    int n;
    scanf("%d", &n);
    int *tab_1D;
    tab_1D = (int *)malloc(n * sizeof(int));
    for(int i=0; i<n; i++){
        tab_1D[i] = i + 1;
        printf("%d\t", tab_1D[i]);
    }
    return 0;
*/

/*
    //3

    int x = 5;
    int *a = &x;

    int y = 1;
    int *b = &y;

    replace(a, b);
    printf("%d\n", *a);
    printf("%d\n", *b);
    return 0;
*/

/*    
    //2

    int x;
    scanf("%d", &x);
    int *ptr = &x;
    int *ptr2 = NULL;
    printPtr(ptr);
    printPtr(ptr2);
    return 0;
*/

/*
    //1

    printf("%d\t", sizeof(int));
    printf("%d\t", sizeof(int*));
    printf("%d\t", sizeof(long int));
    printf("%d\t", sizeof(float));
    printf("%d\t", sizeof(double));
    printf("%d\t", sizeof(int**));
    return 0;
*/
}