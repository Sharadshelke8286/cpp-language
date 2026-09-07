#include<iostream>

const int a = 10;

int main()
{
    int* p = const_cast<int*>(&a);

    *p = 50;

    std::cout << a<<*p<<std::endl;
    return 0;

}