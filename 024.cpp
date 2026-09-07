#include<iostream>
template <typename T1 ,typename T2>
    T2 add(T1 a, T2 b)
    {
        T2 c;
        c=a+b;
        return c;
    }
    template <typename T1 >
    T1 fun(T1 a)
    {
         std::cout<<a<<std::endl;
        return a;
    }
    template <typename T2 >
    T2 gun(int a,T2 b)
    {
        T2 c;
        c=a+b;
        return c;
    }
int main()
{
    
    std::cout<< fun<int>(20)<<std::endl;
    std::cout<< gun(20.5,30.6)<<std::endl;
    std::cout<<add<int,double>(24,30.5)<<std::endl;

    return 0;
}
