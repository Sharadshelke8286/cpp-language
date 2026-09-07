#include<iostream>

class Employee
{
    private:
        std::string name;
        int age;
        int id;
        double salary;

    public:
        Employee(std::string name = "",
                 int age = 0,
                 int id = 0,
                 double salary = 0.0)
        {
            this -> name = name;
            this -> age = age;
            this -> id = id;
            this -> salary = salary;
        }

        void setName(std::string name = "")
        {
            this -> name = name;
        }

        void setAge(int age = 0)
        {
            this -> age = age;
        }

        void setId(int id = 0)
        {
            this -> id = id;
        }

        void setSalary(double salary = 0.0)
        {
            this -> salary = salary;
        }

        std::string getName()
        {
            return this -> name;
        }

        int getAge()
        {
            return this -> age;
        }

        int getId()
        {
            return this -> id;
        }

        double getSalary()
        {
            return this -> salary;
        }

        virtual double calculateSalary()
        {
            return this -> salary;
        }

        virtual void display()
        {
            std::cout << "Name: " << this -> name <<std::endl;
            std::cout << "Age: " << this -> age <<std::endl;
            std::cout << "Id: " << this -> id <<std::endl;
            std::cout << "Salary: " << this -> salary <<std::endl;
        }
};

class Manager : public Employee
{
    private:
        double bonus;

    public:
    Manager(std::string name = "",
            int age = 0,
            int id = 0,
            double salary = 0.0,
            double bonus = 0.0) : Employee(name, age, id, salary)
            {
                this -> bonus = bonus;
            }

    void setBonus(double bonus = 0.0)
    {
        this -> bonus = bonus;
    }

    double getBonus()
    {
        return this -> bonus;
    }

    double calculateSalary()
    {
        return this -> getSalary() + this -> bonus;
    }

    void display()
    {
        Employee::display();
        std::cout << "Bonus: " << this -> bonus << std::endl;
    }
};

class Salesman : public Employee
{
    private:
        double incentive;

    public:
    Salesman(std::string name = "",
            int age = 0,
            int id = 0,
            double salary = 0.0,
            double incentive = 0.0) : Employee(name, age, id, salary)
            {
                this -> incentive = incentive;
            }

    void setIncentive(double incentive = 0.0)
    {
        this -> incentive = incentive;
    }

    double getIncentive()
    {
        return this -> incentive;
    }

    double calculateSalary()
    {
        return this -> getSalary() + this -> incentive;
    }

    void display()
    {
        Employee::display();
        std::cout << "Incentive: " << this -> incentive << std::endl;
    }
};

double totalSalary(Employee* emp[], int n)
{
    double ts = 0.0;

    for(int i = 0 ; i < n ; i++)
    {
        ts = ts + emp[i] -> getSalary();
    }

    return ts;
}

double totalIncome(Employee* emp[], int n)
{
    double ti = 0.0;

    for(int i = 0 ; i < n ; i++)
    {
        ti = ti + emp[i] -> calculateSalary();
    }

    return ti;
}

int main()
{
    Employee* emparr[5];

    emparr[0] = new Manager("Tanuja", 20, 101, 100000, 10000);
    emparr[1] = new Salesman("Pravin", 21, 102, 100000, 5000);
    emparr[2] = new Employee("Sairaj", 22, 103, 100000);
    emparr[3] = new Manager("Snehal", 23, 104, 100000, 10000);
    emparr[4] = new Salesman("Geeta", 24, 105, 100000, 5000);

    for(int i = 0 ; i < 5 ; i++)
    {
        emparr[i] -> display();
    }

    double totalsal = totalSalary(emparr, 5);
    double totalinc = totalIncome(emparr, 5);

    std::cout << "Total Salary: " << totalsal << std::endl;
    std::cout << "Total Income: " << totalinc << std::endl;

    return 0;
}