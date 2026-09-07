#include<iostream>

class Demo
{
    public:
        int a, b;

        Demo(int a, int b)
        {
            this -> a = a;
            this -> b = b;
        }

        bool operator==(const Demo& other) const
        {
                return (this -> a == other.a && 
                this -> b == other.b);
        }
};

int main()
{
    Demo d1(10, 20);
    Demo d2(30, 40);
    Demo d3(10, 20);

    if(d1 == d2)    // d1.operator==(d2) ==> Demo::operator==(&d1, d2);
    {
        std::cout << "d1 and d2 are same" << std::endl;
    }
    else if(d1 == d3)   // d1.operator==(d3)
    {
        std::cout << "d1 and d3 are same" << std::endl;
    }

    return 0;
}