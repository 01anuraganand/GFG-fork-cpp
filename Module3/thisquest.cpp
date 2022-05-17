#include <iostream>
using namespace std;

class Test
{
private:
	int x;
public:
	Test(int x = 0){ this->x = x;}
	void change(Test *t){t = this;}
	void print(){cout<< "x : " << x << endl;}
};



class Test2
{
private:
	int x, y;
public:
	Test2(int x = 0, int y = 0){this->x = x; this->y = y;}
	static void fun1(){cout<< "Inside fun1()";}
	static void fun2(){cout<< "Inside func2() "; fun1();}
};


class Test3
{
private:
	int x, y;
public:
	Test3(int x= 0, int y = 0){this->x = x; this->y = y;}
	Test3 &setX(int a){x = a; return *this;}
	Test3 &setY(int b){y = b; return *this; }
	void print(){cout<< "x :"<<x << " y : " <<y <<endl;}
};


class Test4
{
private:
	int x, y;
public:
	Test4(int x = 0, int y = 0) { this->x = x; this->y = y; }
  	void setX(int a) { x = a; }
  	void setY(int b) { y = b; }
  	void destroy()  { delete this; }
  	void print() { cout << "x = " << x << " y = " << y << endl; }
};
	


int main()
{
	
	Test obj(5);
	Test *ptr = new Test(10);
	obj.change(ptr);
	obj.print();
	
	cout<<"-----------------"<<endl;
	Test2 obj2;
	obj2.fun2();
	
	
	cout<<"------------------"<<endl;
	
	Test3 obj3;
	obj3.setX(10).setY(20);
	obj3.print();
	
	cout<<"--------------------"<<endl;
	Test4 obj4;
	obj4.print();
	obj4.destroy();
	
	return 0;
	
}