#include<iostream>

class Demo
{
    public:

    void fun()
    {
        const int a = 10;
        std :: cout << 10 << std::endl;
        int* p = const_cast<int*>(&a);
        *p = 50;
        std::cout << *p << std::endl;
        std :: cout << 10 << std::endl;

        std::cout << &a <<std::endl;
        std::cout << p <<std::endl;
    }
};

int main()
{
    Demo d;
    d.fun();

    return 0;
}