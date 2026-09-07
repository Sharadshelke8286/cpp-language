#include<iostream>

class Demo
{
    private:
        int a, b, c;
    public:
        Demo(int a, int b, int c)
        {
            this -> a = a;
            this -> b = b;
            this -> c = c;
        }

        friend std::ostream& operator<<(std::ostream& os, const Demo& other);
};

std::ostream& operator<<(std::ostream& os, const Demo& other)
{
    os << other.a << std::endl;
    os << other.b << std::endl;
    os << other.c << std::endl; 

    return os;
}

int main()
{
    Demo d1(10, 20, 30);
   std::cout << d1 << std::endl; //operator<<(std::cout, d1);
    return 0;
}
