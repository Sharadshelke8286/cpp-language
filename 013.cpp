#include<iostream>

class Demo
{
    public:
        int* ptr;
        int size;

        Demo(int size)
        {
            this -> size = size;
            this -> ptr = (int*)malloc(size * sizeof(int));
        }

        int& operator[](int index)
        {
            if(index > 0 || index <= size)
            {
                return this -> ptr[index];
            }
        }
};

int main()
{
    Demo d(5);      // Demo d[5]

    for(int i = 0 ; i < 5 ; i++)
    {
        d[i] = i+1;     // d.operator[](i);
    }

    for(int i = 0 ; i < 5 ; i++)
    {
        std::cout << "d[" << i << "] = " << d[i] << std::endl;
    }

    return 0;
}