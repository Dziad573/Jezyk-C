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


#include <stdio.h>

int max(int tab[2][3]){
    int max = tab[0][0];
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            if(tab[i][j]>max){
                max = tab[i][j];
            }
        }
    }
    return max;
}
int main(){
    int tab[2][3] = {{2,5,1}, {7,6,2}};
    printf("%d", max(tab));
    return 0;
}



#include <stdio.h>
#include <stdlib.h>
void sort(int *tab ,int N){
    for(int i=0; i<N - 1; i++){
        for(int j=0; j<N - i - 1; j++){
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
    scanf("%d ", &N);
    int *tab = malloc(N * sizeof(int));
    
    for(int i=0; i<N; i++){
        scanf("%d", &tab[i]);
    }

    sort(tab, N);

    for(int i=0; i<N; i++){
        printf("%d", tab[i]);
    }
    free(tab);
    return 0;
}



#include <stdio.h>
struct Student{
    char imie[10];
    char nazwisko[10];
    int indeks[5];
    int oceny[5];
};

//int main(){
//    struct Student s = {"John", "Doe", {1} , {5,5,4,4,5}};
//    printf("%d", s.oceny[2]);
//}


#include <stdio.h>

struct Student{
    float oceny[6];
};
float studentMean(struct Student s){
    float sum = 0.0;
    for(int i=0;i<(sizeof(s.oceny)/sizeof(s.oceny[0])); i++){
        sum += s.oceny[i];
    }
    return sum/(sizeof(s.oceny)/sizeof(s.oceny[0]));
}

int main(){
    struct Student s = {5,4,5,4,5,4};
    printf("%.2f", studentMean(s));
    return 0;
}