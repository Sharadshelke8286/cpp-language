#include<iostream>

class Demo
{
    public:
    
        Demo& operator()()
        {
            std::cout << "Operator Function call overloaded" << std::endl;
            return *this;
        }

        void operator()(int x)
        {
            std::cout << x << std::endl;
        }
};

int main()
{
    Demo d;

    d();    // d.operator()();
    d(10);  // d.operator()(10);

    d()(10);    // d.operator().operator(10)

    return 0;
}