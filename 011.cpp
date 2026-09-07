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

        Demo operator--(int a) 
        {
            Demo tempobj;
            tempobj = *this;

            (this -> a)--;
            (this -> b)--;

            return tempobj;
        }

        Demo operator--()
        {
            (this -> a)--;
            (this -> b)--;

            return *this;
        }

};

int main()
{
    Demo d1(10, 20);
    Demo d2(30, 40);
    Demo d3, d4;

    std :: cout << "Before increment d1 = " << d1.a <<d1.b<<std::endl;
    std :: cout << "Before increment d3 = "<< d3.a <<d3.b<<std::endl;
    d3 = d1--;   //d1.operator++(); ==> Demo::operator++(&d1, 0);
    std :: cout << "After increment d1 = "<< d1.a <<d1.b<<std::endl;
    std :: cout << "After increment d3 = "<< d3.a <<d3.b<<std::endl;
    std::cout<<std::endl;

    std :: cout << "Before increment d2 = " << d2.a <<d2.b<<std::endl;
    std :: cout << "Before increment d4 = "<< d4.a <<d4.b<<std::endl;
    d4 = --d2;   //d2.operator++(); ==> Demo::operator++(&d2);
    std :: cout << "After increment d2 = "<< d2.a <<d2.b<<std::endl;
    std :: cout << "After increment d4 = "<< d4.a <<d4.b<<std::endl;
    
    return 0;
}
