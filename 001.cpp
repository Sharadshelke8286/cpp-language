#include<iostream>

class Demo
{
    public:
        static int a;
        float b; 
        char c;
};

int Demo::a = 10;

int main()
{
    std::cout << Demo::a << std::endl;
    return 0;
}