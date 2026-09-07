#include<iostream>

class Person
{
    private:
        char* name;
        int age;

    public:
        Person(const char* name = "", int age = 0)  // default argument
        {
            strcpy(this -> name, name);
            this -> age = age;
        }

        void setname(const char* name = "")
        {
            strcpy(this -> name , name);
        }

        void setage(int age = 0)
        {
            this -> age = age;
        }

        char* getname()
        {
            return this -> name;
        }

        int getage()
        {
            return this -> age;
        }
};

class Employee : public Person
{
    private:
        double salary;

};

int main()
{

    return 0;
}