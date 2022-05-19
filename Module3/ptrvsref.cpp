#include <iostream>
using namespace std;

struct demo
{
	int a;
};

int main()
{
	int x = 5, y = 6;
	
	demo d;
	
	//pointer analogy
	int *p;
	p = &x;
	p = &y;
	cout<<*p<<endl;
	
	// reference analogy
	int &r = x;
	cout<<r<<endl;
	// &r = y; error: lvalue required as left operand of assignment
	
	r = y;
	cout<<r<<endl;
	
	p++; r++;
	cout<< &p << " "<< &y <<endl;
	cout<< &r << " " << &x <<endl;
	
	demo *q = &d;
	demo &qq = d;
	
	q->a = 8;
	qq.a = 8;
	
	cout<<p<<endl;
	cout<<r<<endl;
}