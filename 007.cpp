#include<iostream>

class Demo
{
    public:
        int a, b;
        static int c;

        Demo() : a(10), b(20)
        {
            this -> a = 10;
            this -> b = 20;
        }

        Demo(int p, int q) : a(p), b(q)
        {
            this -> a = p;
            this -> b = q;
        }
        
};

int Demo::c = 30;

int main()
{
    Demo d1;
    std::cout << "d1.a:=> " << d1.a << std::endl;
    std::cout << "d1.b:=> " << d1.b << std::endl;
    std::cout << "Demo::c:=> " << Demo::c << std::endl;
   
    Demo d2(50, 60);
    std::cout << "d2.a:=> " << d2.a << std::endl;
    std::cout << "d2.b:=> " << d2.b << std::endl;
    std::cout << "Demo::c:=> " << Demo::c << std::endl;

    //Demo d3(d1);
    Demo d3 = d1;    // sythesized copy constructor
    std::cout << "d3.a:=> " << d3.a << std::endl;
    std::cout << "d3.b:=> " << d3.b << std::endl;
    std::cout << "Demo::c:=> " << Demo::c << std::endl;
    
    return 0;
}