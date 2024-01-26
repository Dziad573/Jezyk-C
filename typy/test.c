#include <stdio.h>
#include <math.h>
int isPrime(int n){
    int prime = 1;
    if(n < 2){
        prime = 0;
    }
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0){
            prime = 0;
            break;
        }
    }
    return prime;
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", isPrime(n));
    return 0;
}

/*
#include <stdio.h>
int max(int tab[2][3]){
    int max = tab[0][0];
    for(int j = 0; j<2; j++){
        for(int i = 0; i<3; i++){
            if(tab[j][i]>max){
                max = tab[j][i];
            }
        }
    }
    return max;
}

int main(){
    int tab[2][3] = {{2,3,1}, {5,9,1}};
    printf("%d",max(tab));
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
int sort(int *tab, int len){
    for(int i=0; i<len - 1; i++){
        for(int j=0; j<len - i - 1; j++){
            if(tab[j]>tab[j+1]){
                int temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
}

int main(){
    int N;
    scanf("%d", &N);
    int *tab = malloc(N * sizeof(int));
    for(int i=0; i<N; i++){
        scanf("%d", &tab[i]);
    }
    sort(tab, N);
    for(int i=0; i<N; i++){
        printf("%d ", tab[i]);
    }
    free(tab);
    return 0;
}
*/

/*
#include <stdio.h>
struct Student{
    char imie[10]; 
    char nazwisko[10];
    int indeks;
    float oceny[20];
}
*/

/*
#include <stdio.h>
struct Student{
    float oceny[4];
};
float studentMean(struct Student s){
    float sum = 0.0;
    for(int i=0; i<4; i++){
        sum += s.oceny[i];
    }
    return sum/(sizeof(s.oceny)/sizeof(s.oceny[0]));
}
int main(){
    struct Student mys = {4,4,5,5};
    printf("%.2f", studentMean(mys));
    return 0;
}
*/