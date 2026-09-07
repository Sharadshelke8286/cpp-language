#include<iostream>
#include<cstdlib>

class Demo
{
    public:
        int a, b, *p;
        Demo()
        {

        }
        Demo(int a, int b, int c)
        {
            this -> a = a;
            this -> b = b;
            this -> p = (int*)malloc(sizeof(int));
            *(this -> p) = c;
        }

        Demo(const Demo& other)
        {
            this -> a = other.a;
            this -> b = other.b;
            this -> p = (int*)malloc(sizeof(int));
            *(this -> p) = *(other.p);
        }

        Demo& operator=(const Demo& other)
        {
            this -> a = other.a;
            this -> b = other.b;
            this -> p = (int*)malloc(sizeof(int));
            *(this -> p) = *(other.p);

            return *this;
        }
};

int main()
{
    std::cout << "Before change : " << std::endl;
    Demo d1(10, 20, 30);
    std::cout << "d1.a:=> " << d1.a << std::endl;
    std::cout << "d1.b:=> " << d1.b << std::endl;
    std::cout << "*(d1.p):=> " << *(d1.p) << std::endl;

    // Demo d2(d1);
    // Demo d2 = d1;
    Demo d2;
    d2 = d1;       // d2.operator=(d1) 
    std::cout << "d2.a:=> " << d2.a << std::endl;
    std::cout << "d2.b:=> " << d2.b << std::endl;
    std::cout << "*(d2.p):=> " << *(d2.p) << std::endl << std::endl;

    d1.a = 100;
    d2.b = 200;
    *(d1.p) = 300;

    std::cout << "After change : " << std::endl;
    std::cout << "d1.a:=> " << d1.a << std::endl;
    std::cout << "d1.b:=> " << d1.b << std::endl;
    std::cout << "*(d1.p):=> " << *(d1.p) << std::endl;
    
    std::cout << "d2.a:=> " << d2.a << std::endl;
    std::cout << "d2.b:=> " << d2.b << std::endl;
    std::cout << "*(d2.p):=> " << *(d2.p) << std::endl << std::endl;

    return 0;
}







