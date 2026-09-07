#include<iostream>

class Template
{
    public:
    
    template <typename T1 >
    T1 fun(T1 a) 
    {
         std::cout<<a<<std::endl;
        return a;
        
    }

    template <typename T1 ,typename T2>
    T2 add(T1 a, T2 b)
    {
        T2 c;
        c=a+b;
        return c;
    }
};
int main()
{
    Template obj;
    std::cout<< obj.fun<int>(20)<<std::endl;
    std::cout<< obj.add<int,double>(24,30.5)<<std::endl;
    return 0;
}
