#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("first string initialized");
	
	string str2(str1);
	
	string str3(5, '#');
	
	string str4(str1, 6, 13);
	
	string str5(str2.begin(), str2.begin()+5);
	
	cout<<str1 << "\n"<< str2 << "\n" << str3<<"\n"<< str4<<"\n" << str5<<endl;
	
	string str6 = str4;
	str4.clear();
	
	cout<<"----------"<<str4<<endl;
	
	cout<<str6<<endl;
	char ch = str6.at(1);
	cout<<ch<<endl;
	
	char ch_f = str6.front();
	char ch_b = str6.back();
	cout<< "Front:" << ch_f <<endl;
	cout<< "Back:" << ch_b <<endl;
	
	str6.append("lized ");
	
	cout<< str6<<endl;
	
	
	str6.append(str1, 0, 5);
	cout<<str6<<endl;
	
	//str5 = "first"
	if (str6.find(str5) != string::npos)
		cout<< "string found at pos:"<<str6.find(str5)<<endl;
	else
		cout<< "str5 not found in str6\n";
	
	
	cout<< str6.substr(7)<<endl;
	cout<< str6.substr(7,10)<<endl;//starting from 7 character to 7+10 character
	
	
	cout<<str6<<endl;
	str6.replace(7, 10, "created");
	cout<< str6<<endl;
}