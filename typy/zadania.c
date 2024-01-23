#include <stdio.h>
int main(){
    int liczba;
    scanf("%d", &liczba);
    switch(liczba){
        case 0: 
        printf("Wpisales %d", liczba);
        break;
        case 1: printf("Wpisales %d", liczba);
        break;
        case 2: printf("Wpisales %d", liczba);
        break;
        default: printf("Podales liczbe inna niz 0, 1, 2");
    }
/*
    float liczba;
    scanf("%f", &liczba);
    if(liczba > 3.14){
        liczba = liczba * liczba;
        printf("%.2f", liczba);
    }else{
        int liczba1 = liczba;
        printf("%d", liczba1);
    }

    int liczba;
    scanf("%d", &liczba);
    if(liczba < 0){
        liczba = liczba * -1;
        printf("%d", liczba);
    }else{
        printf("%d", liczba);
    }


    int liczba;
    scanf("%d", &liczba);
    if (liczba > 20){
        printf("1");
    }else{
        printf("-1");
    }

    
    int znak;
    znak = getchar();

    char znak2[50];
    gets(znak2);
    //fgets(znak2, sizeof(znak2), stdin);

    printf("%c", znak);
    printf("%s", znak2);


    int liczba1;
    int liczba2;
    scanf("%d %d", &liczba1, &liczba2);
    int wynik = liczba1 % liczba2;
    printf("%d", wynik);
    


    int liczba;
    scanf("%d", &liczba);
    int liczba2 = liczba * 2;
    printf("Posiadasz %d jest to 50%% potrzebnej sumy. Wartosc niezbedna do kupna towaru to: %d", liczba, liczba2);
    */
    return 0;
}