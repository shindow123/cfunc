#include <iostream>
using namespace std;

class A
{
public:
	A():a(1){};
	void printA(){cout<<a<<endl;}
	int a;
};

class B : public A
{
public:
	void printB(){cout<<"from B"<<endl;}
};

class C : public A
{
public:
	void printB(int v){cout<<"from C"<<endl;}
};

class D:  public B ,  public C
{
};

int main()
{
	D d;
	cout<<sizeof(d);
	d.printB(); // error: request for member 'printB' is ambiguous
	return 0;
}
