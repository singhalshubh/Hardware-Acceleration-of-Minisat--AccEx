#include<stdio.h>

void func5(void)
{
    printf("\n Inside func5 \n");
    int i = 0;

    for(;i<1200000000;i++);
    return;
}


void func4(void)
{
    printf("\n Inside func4 \n");
    int i = 0;

    for(;i<90000000;i++);
    func5();
    return;
}

void func3(void)
{
    printf("\n Inside func3 \n");
    int i = 0;

    for(;i<100000000;i++);
    func4();
    return;
}

void func2(void)
{
    printf("\n Inside func2 \n");
    int i = 0;

    for(;i<10000000;i++);
    func3();
    func4();
    return;
}


void func1(void)
{
    printf("\n Inside func1 \n");
    int i = 0;

    for(;i<1000000000;i++);
    func2();
    return;
}


int main(void)
{
    printf("\n Inside main()\n");
    int i = 0;

    for(;i<1000000;i++);
    func1();
    func5();

    return 0;
}