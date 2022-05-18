#include <iostream>
using namespace std;

void swapbyptr(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swapbyref(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 45, b = 35;
	
	swapbyptr(&a, &b);
	cout<< a <<" " << b <<endl;
	
	swapbyref(a,b);
	cout<<a <<" "<< b<<endl;
	
	swapbyref(a,b);
	cout<<a <<" "<< b<<endl;
}
