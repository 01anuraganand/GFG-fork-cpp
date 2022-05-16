//Write an efficient program to count the number of 1s in the binary representation of an integer.
#include <iostream>
using namespace std;

unsigned int count1Bits(unsigned int n)
{
	unsigned int count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return count;
}

unsigned count1Bits_recursive(unsigned int n)
{
	if (n == 0)
		return 0;
	else
		return (n & 1) + count1Bits_recursive(n >> 1);
}

//Brian Kernighan's Algorithm
unsigned int count1BitsBrian(int n)
{
	unsigned int count = 0;
	while(n)
	{
		n = n & (n-1);
		count++;
	}
	return count;
}

int main()
{
	int n;
	cin>>n;
	cout<< __builtin_popcount(n)<<endl;
	
	cout<<count1Bits(n)<<endl;
	cout<< count1Bits_recursive(n)<<endl;
	cout<< count1BitsBrian(n)<<endl;
}