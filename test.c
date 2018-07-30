#include <stdio.h>

void f1()
{
    printf("f123456789");
}

void f2()
{
    printf("f23456789");
    printf("f23456789");
    printf("f23456789");
}

int main()
{
    f1();
    f2();
    return 0;
}
