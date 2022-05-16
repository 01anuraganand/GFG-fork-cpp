#include <iostream>
#include <map>
using namespace std;
//Given an array of integers. All numbers occur twice except one number which occurs once.

int findSingle_XOR(int arr[],int N)
{
	
	int result = arr[0];
	for (int i = 1; i<N; i++)
	{
		result = result ^ arr[i];
	}
	return result;
}

//: 2*(sum_of_array_without_duplicates) - (sum_of_array)
int findSingle_Equation(int arr[], int N)
{	
	map<int, int> freq;
	int sum1 = 0, sum2 = 0;
	for(int i = 0; i<N; i++)
	{
		if (freq[arr[i]] == 0)
			{
				sum1 += arr[i];
				freq[arr[i]]++;
			}
		sum2 += arr[i];
	}
	
	return 2*sum1 - sum2;
}

int main()
{
	int N;
	cin>>N;
	int arr[N];
	for (int i = 0;  i<N; i++)
		cin>>arr[i];
	
	cout<< findSingle_XOR(arr, N)<<endl;
	cout<< findSingle_Equation(arr, N)<<endl;
}