#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a = 35;
    int b = 15;
    int result = 0;

    //Arithmetic operators
    /*result = a + b;
    printf("result is %d\n", result);

    result = a - b;
    printf("result is %d\n", result);

    result = a * b;
    printf("result is %d\n", result);

    result = a / b;
    printf("result is %d\n", result);

    result = a % b;
    printf("result is %d\n", result);

    result = ++a;
    printf("result is %d\n", result);

    result = --a;
    printf("result is %d\n", result);*/

    //Logical Operators
/*    bool boolean = true && true;
    printf("result is %d\n", boolean);

    bool boolean2 = true && false;
    printf("result is %d\n", boolean2);

    bool boolean3 = true || false;
    printf("result is %d\n", boolean3);

    bool boolean4 = false || false;
    printf("result is %d\n", boolean4);

    bool boolean5 = !true;
    printf("result is %d\n", boolean5);

    bool boolean6 = !false;
    printf("result is %d\n", boolean6);*/

    //Assignment Operators
    int c = 10;
    int d = 20;

    d += c;
    printf("%d\n",d);

    d -= c;
    printf("%d\n",d);

    d *= c;
    printf("%d\n",d);

    d /= c;
    printf("%d\n", d);

    d %= c;
    printf("%d\n", d);

    //Bitwise operators
    //<<=, >>=, &=, ^=, |=

    //Relational operators
    //==, !=, >, <, >=, <=

    return 0;
}
