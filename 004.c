#include<stdio.h>

void main()
{
    const int a = 10;
    printf("a = %d\n",a);
    int* p = &a;
    *(p) = 20;
    printf("a = %d\n",a);
    printf("*p = %d\n",*p);
}