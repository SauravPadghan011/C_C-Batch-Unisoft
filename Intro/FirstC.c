#include<stdio.h>

int main() {

    int integerType = 2147483648;
    unsigned int unInt = -1;
    float floatType = 83.99;
    double doubleType = 83.99;
    char ch = 'A';

    long long int mobile = 9373232132;


    int num;


    /* This is Comment */
    printf("Hello World\n");

    printf("%d %f %lf %c", integerType, floatType, doubleType,  ch);  
    printf("\nMobile: %lld", mobile);

    printf("\nSize of Integer: %d", sizeof(int));
    printf("\nSize of Long Integer: %d", sizeof(long int));
    printf("\nSize of Long Long Integer: %d", sizeof(long long int));
    printf("\nSize of Float: %d", sizeof(float));
    printf("\nSize of Double: %d", sizeof(double));
    printf("\nSize of Character: %d", sizeof(char));  

    printf("\nUnsigned Int: %u", unInt);

    printf("\nChar %c:%d", ch, ch);


    printf("Input Section: \n");
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Num: %d", num);

    return 0;
}