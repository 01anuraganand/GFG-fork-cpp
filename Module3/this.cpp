#include <iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	void setX(int x)
	{
		this->x = x;
		cout<<this<<endl;
	}
	
	void print()
	{
		cout<<"x = " << x <<endl;
		cout<<&x<<endl;
	}
};


class Test1
{
private:
	int x, y;
public:
	Test1(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
		cout<<this<<endl;
		cout<<&(this->x)<<endl;
		cout<<&(this->y)<<endl;
		
	}
	
	Test1 &setX(int a)
	{
		x = a; return *this;
	}
	
	Test1 &setY(int b)
	{
		y = b; return *this;
	}
	
	void print()
	{
		cout<< "x : "<< x <<" y : " << y <<endl;
	}
};

int main()
{
	/*
	Test obj;
	int x = 20;
	obj.setX(x);
	obj.print();
	*/
	
	Test1 obj2(7,9);
	obj2.setX(1).setY(2);
	obj2.print();
	
	
	return 0;
}