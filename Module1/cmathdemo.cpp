#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	
	cout << "floor method\n";
	double x = 1.411, y = 1.500, z = 1.71;
	cout << floor(x) << endl;
	cout << floor(y) << endl;
	cout << floor(z) << endl;
	
	double a =  -1.411, b = -1.500, c = -1.611;
	cout << floor(a) << endl;
	cout << floor(b) << endl;
	cout << floor(c) << endl;
	
	
	cout << "\nceil method" << endl;
	cout << ceil(x) <<endl;
	cout << ceil(y) << endl;
	cout << ceil(z) << endl;
	
	cout << ceil(a) << endl;
	cout << ceil(b) << endl;
	cout << ceil(c) << endl;
	
	
	cout << "\ntrunc method" << endl;
	
	cout << trunc(x) << endl;
	cout << trunc(y) << endl;
	cout << trunc(z) << endl;
	
	cout << trunc(a) << endl;
	cout << trunc(b) << endl;
	cout << trunc(c) << endl;
	
	
	cout << "\n round method" << endl;
	cout << round(x) << endl;
	cout << round(y) << endl;
	cout << round(z) << endl;
	
	cout << round(a) << endl;
	cout << round(b) << endl;
	cout << round(c) << endl;
	return 0;
}