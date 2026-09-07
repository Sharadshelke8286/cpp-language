#include<iostream>

class Demo
{
    public:
    mutable int a;
    int b;

    Demo() : b(20), a(50)
    {
        //a = 10;
    }

    void gun()
    {

    }

    const int* fun() const
    {
        std::cout<<++(this ->a)<<(this -> b)<<std::endl;

        return &(this -> a);
    }
};

int main()
{
    Demo d1;
    d1.fun();
    d1.gun();

    const Demo d2;
    d2.fun();
    //d2.gun();
    return 0;
}