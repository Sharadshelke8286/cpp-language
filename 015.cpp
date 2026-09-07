#include<iostream>

class Demo
{
    private:
        int a;
        int b;
        int c;
    protected:
        int d;
    public:
        int e;
};

class Test : Demo
{

};

class Other
{
    Demo d;
    
    void fun()
    {
        
    }
};

int main()
{
    Other o;
    std::cout << "size of d = " << sizeof(o) << std::endl;

    return 0;
}