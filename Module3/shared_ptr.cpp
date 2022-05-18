#include <iostream>
#include <memory>
using namespace std;

class Rectangle
{
	int length, breadth;
public:
	Rectangle(int l, int b){length = l; breadth = b;}
	
	int area(){return length*breadth;}
	
};

int main()
{
	shared_ptr<Rectangle> P1(new Rectangle(10,4));
	cout<<P1->area()<<endl;
	cout<<P1.use_count()<<endl;
	
	shared_ptr<Rectangle> P2;
	P2 = P1;
	cout<< P2->area()<<endl;
	cout<< P1->area()<<endl;
	cout<< P1.use_count() <<endl;
	
	shared_ptr<Rectangle> P3;
	P3 = P2;
	
	cout<<P3->area()<<endl;
	cout<<P3.use_count()<<endl;
	
}