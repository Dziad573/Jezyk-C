#include <stdio.h>

int main(void)
{
    float promien, wysokosc, objetosc;
    promien = 3.3f;
    wysokosc = 10.5;
    objetosc = 3.14f * promien * wysokosc;
    printf("Obj walca o wysokości: %.2f i promieniu: %.2f wynosi: %.2f", wysokosc, promien, objetosc);
    return 0;
}