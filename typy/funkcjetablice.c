#include <stdio.h>

/*
//1

float function(float liczba){
    return liczba/2 + 2;
}


//2
float min(float m1, float m2, float m3){
    if(m1 < m2 && m1 < m3){
        printf("Najmniejsza jest %.2f", m1);
    }else if(m2 < m1 && m2 < m3){
        printf("Najmniejsza jest %.2f", m2);
    }else{
        printf("Najmniejsza jest %.2f", m3);
    }
}


//3


    void printLine(int width, char c){
    scanf("%d\n", &width);
    scanf("%c", &c);
    for(int i = 0; i<width; i++){
        printf("%c", c);
    }
}


//4

void printRectangle(int height, int width, char c){
    scanf("%d\n", &width);
    scanf("%d\n", &height);
    scanf("%c", &c);
    for(int i = 0; i<height; i++){
        for(int j = 0; j<width; j++){
            printf("%c", c);
        }
            printf("\n");
        
    }
}

//6
#include <math.h>

//7

//8
float mean(int numbers[], int length){
    int sum = 0;
    for(int i = 0; i<length-1; i++){
        scanf("%d\n", &numbers[i]);
        sum += numbers[i];
    }
    return (float)sum / (length-1);
}


//9
void reverse(int numbers[], int length){
    for (int i = 0; i < length; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < length / 2; i++){
        int temp = numbers[i];
        numbers[i] = numbers[length - i - 1];
        numbers[length - i - 1] = temp;
    }
    for(int i = 0; i<length; i++){
        printf("%d\t", numbers[i]);
    }
}
*/

int main(){
    //9
/*
    int length;
    scanf("%d\n", &length);
    int numbers[length];
    reverse(numbers, length);




    //8
    int length;
    scanf("%d\n", &length);
    int numbers[length];
    float result = mean(numbers, length);
    printf("%.2f", result);
    



    //7
    int n;
    scanf("%d", &n);
    int tab[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &tab[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d\t", tab[i]);
    }



    //6
    int tab[20];

    for (int i = 0; i < 20; i++) {
        tab[i] = pow(2, i);
        printf("%d\t", tab[i]);
    }


    //4
    int height;
    int width;
    char c;
    printRectangle(height, width, c);
    


    //3

    int width;
    char c;
    printLine(width, c);

    //2
    float m1 = 2;
    float m2 = 1;
    float m3 = 4;
    min(m1, m2, m3);



    //1
    float liczba = 3;
    float liczba2 = function(liczba);
    printf("%.2f", liczba2);
*/
return 0;
}