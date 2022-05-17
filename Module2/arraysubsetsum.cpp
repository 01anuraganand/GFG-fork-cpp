#include <bits/stdc++.h>
using namespace std;

void arraysubsetsum(int arr[], int length, int N)
{	

	for (int i = 1; i< (pow(2, length)); i++)
		{
			int sum = 0;
			for (int j = 0; j<length; j++)
				if (((i >> j) & 1))
				{
					sum += arr[j];
					//cout<<sum;
				}
			
			
			if (sum == N)
			{
				
				cout<<"YES\n";
				return;
			}
		}
	cout<<"NO\n";
	
}

int main()
{
	int N = 5;
	int arr[] = {-1, 2, 4, 121};
	int length = sizeof(arr) /sizeof(int);
	
	arraysubsetsum(arr, length, N);
	return 0;
	
}