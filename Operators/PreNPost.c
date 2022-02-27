#include<stdio.h>

int main() {

    int a = 199;
    a++;
    printf("\na++: %d", a++);
    printf("\na++: %d", a++);
    // ++a;
    printf("\n++a: %d", ++a);
    printf("\n++a: %d", ++a);
    // a--;
    printf("\na--; %d", a--);
    // --a;
    printf("\n--a: %d", --a);

    a = 99;
    printf("\n%d", a);
    a++;
    printf("\n%d", a);
    ++a;
    printf("\n%d", a);


    return 0;
}