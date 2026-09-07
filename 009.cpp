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

        Demo()
        {

        }

        Demo& operator-(const Demo& other) const
        {
            static Demo tempobj;
            tempobj.a = this -> a - other.a;
            tempobj.b = this -> b - other.b;

            return tempobj;
        }

};

int main()
{
    Demo d1(10, 20);
    Demo d2(30, 40);

    Demo d3;
    d3 = d1 - d2;   //  d1.operator-(d2);

    std::cout << "d1.a = " << d1.a << std::endl;
    std::cout << "d1.b = " << d1.b << std::endl << std::endl;
    std::cout << "d2.a = " << d2.a << std::endl;
    std::cout << "d2.b = " << d2.b << std::endl << std::endl;
    std::cout << "d3.a = " << d3.a << std::endl;
    std::cout << "d3.b = " << d3.b << std::endl;
    return 0;
}