#include <stdio.h>

void f1()
{
    printf("f123456789");
}

void f2()
{
    printf("f2345678910");
    printf("f23456789");
    printf("f2345678943242432432432");
}

int main()
{
    f1();
    f2();
    return 0;
}
