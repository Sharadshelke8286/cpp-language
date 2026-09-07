#include<iostream>
template <typename T1 ,typename T2>
class Template
{
    public:
    T1 a;
    T2 b;

    Template(T1 a,T2 b )
    {
        this->a=a;
        this->b=b;
    }
    T1 fun(T1 a)
    {
         std::cout<<a<<std::endl;
        return a;
        
    }
    T2 add(T1 a, T2 b)
    {
        T2 c;
        c=a+b;
        return c;
    }
};
int main()
{
    Template<int,double>obj(20,20.0);
    std::cout<< obj.fun(20)<<std::endl;
    std::cout<< obj.add(24,30.5)<<std::endl;
    return 0;
}
