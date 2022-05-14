#include <iostream>
using namespace std;


namespace ns1
{
	int value (){ return 5;}
}

namespace ns2
{
	const double x = 100;
	double value() { return 2*x;}
}


namespace ns
{
	class cs
	{
		public:
			void display()
			{
				cout<< "ns::cs::display()\n";
			}
	};
}

int main()
{
	
	cout<<ns1::value()<<endl;
	cout<< ns2::x<<endl;
	cout<<ns2::value()<<endl;
	
	
	
	ns::cs obj;
	obj.display();
	return 0;
	
	
	
}