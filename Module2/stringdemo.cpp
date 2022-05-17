#include <iostream>

using namespace std;
#include<string>

int main()
{
	string str;
	
	cout<<"-----getline, push_back, pop_back-----\n";
	getline(cin, str);
	cout<<str <<"\n";
	
	str.push_back('a');
	
	cout<<str<<"\n";
	
	str.pop_back();
	
	cout<<str<<"\n";
	
	cout<<"-----capacity, resize, length, shrink_to_fit\n";
	str = "welcome to programming world!";
	cout<<str<<"\n";
	
	cout<<str.capacity()<<endl;
	
	str.resize(12);
	cout<<str<<endl;
	cout<<str.capacity()<<endl;
	
	str.shrink_to_fit();
	cout<<str.capacity()<<endl;
	
	cout<<str.length()<<endl;
	
	
	cout<<"-----begin, end, rbegin, rend-----\n";
	str = "a new string created";
	
	string::iterator it;
	
	string::reverse_iterator rit;
	
	for(it = str.begin(); it !=str.end(); it++)
		cout<<*it;
	cout<<endl;
	
	for(rit = str.rbegin(); rit != str.rend(); rit++)
		cout<<*rit;
	cout<<endl;
	
	for (auto it: str)
		cout<<it;
	
	cout<<"-----copy(char array, len, pos), swap-----\n";
	
	string str1 = "first string created";
	string str2 = "second string created";
	
	char ch[80];
	str1.copy(ch, 10, 0);
	
	cout<<ch<<endl;
	
	cout<<str1 <<"\n"<<str2<<endl;
	
	str1.swap(str2);
	
	cout<<str1 <<"\n"<<str2<<endl;
	
}