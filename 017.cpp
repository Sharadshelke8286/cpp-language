#include<iostream>

class A
{
public:
	double a;

	A()
	{
		this->a = 1.0;
	}
};

class B
{
public:
	double b;

	B()
	{
		this->b = 2.0;
	}
};

class C
{
public:
	double c;
	C()
	{
		this->c = 3.0;
	}
};

class D : public A, public B, public C
{
public:
	int d;

	D()
	{
		this->d = 4.0;
	}
};

int main()
{
	D dobj;
	
	A* aptr = &dobj;
	B* bptr = &dobj;
	C* cptr = &dobj;
	
	std::cout << "&dobj = " << &dobj << std::endl;
	std::cout << "aptr = " << aptr << std::endl;
	std::cout << "bptr = " << bptr << std::endl;
	std::cout << "cptr = " << cptr << std::endl;
	

	/*D* dptr = static_cast<D*>(cptr);*/


	return 0;
}