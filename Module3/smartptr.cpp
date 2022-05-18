#include <iostream>
using namespace std;

// designed for int only
class SmartPtr
{
	int *ptr;
public:
	explicit SmartPtr(int *p = NULL){ptr = p;}
	
	~SmartPtr(){delete ptr;}
	
	int &operator*(){return *ptr;}
	
};


// for any data type
template <class T>
class SmartPtre
{
	T *ptr;
public:
	explicit SmartPtre(T *p = NULL){ptr = p;}
	
	~SmartPtre(){delete ptr;}
	
	T &operator*(){return *ptr;}
	
	T &operator->(){return ptr;}
};

int main()
{
	cout<<"Calling of int SmartPtr.\n";
	SmartPtr ptr(new int());
	*ptr = 20;
	cout<<*ptr<<endl;
	
	cout<<"Calling of template SmartPtre.\n";
	SmartPtre<string> ptre(new string());
	*ptre = "done";
	cout<<*ptre<<endl;
	
	return 0;
	
}