#include <stdio.h>

int main()
{
    int tab[] = {5,1,3,6,2,9,1,3,4,8};

    int tab_length = sizeof(tab) / sizeof(tab[0]);

    for (int i = 0; i < tab_length; i++){
        for(int j = 0; j < tab_length - 1; j++){
            if(tab[j] > tab[j + 1]){
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
    printf("Bubble Sort: ");
    for (int i = 0; i < tab_length; i++){
        printf("%d, ", tab[i]);
    }
    return 0;
}