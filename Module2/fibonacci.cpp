#include <iostream>
#include <cmath> // ro4 power and sqrt
#include<cstring> // for memset
using namespace std;
int dp[100000];

int fibonacci_DP(int N)
{
	int arr[N];
	arr[0] = 0;
	arr[1] = 1;
	for (int i = 2; i<=N; i++)
	{
		arr[i] = arr[i-1] + arr[i-2];
	}
	return arr[N];
}

int fibonacci_recursion(int N)
{
	if (N<=1)
		return N;
	return fibonacci_recursion(N-1) + fibonacci_recursion(N-2);
}

int fibonacci_space_optimized(int N)
{
	int first = 0;
	int second = 1;
	int series  = 0;
	
	if (N==0) return first;
	
	for (int i = 2; i<=N; i++)
	{
		series = first + second;
		first =  second;
		second = series;
	}
	return second;
	
}

int fibonacci_formula(int N)
{
	double phi = (1+sqrt(5)) /2;
	return round(pow(phi, N)/sqrt(5));
}

class fibMatrix
{
	public:
		void multiply(int F[2][2], int M[2][2])
		{
			int x = F[0][0]*M[0][0] + F[0][1]*M[1][0];
			int y = F[0][0]*M[0][1] + F[0][1]*M[1][1];
			int z = F[1][0]*M[0][0] + F[1][1]*M[1][0];
			int w = F[1][0]*M[0][1] + F[1][1]*M[1][1];
			F[0][0] = x;
			F[0][1] = y;
			F[1][0] = z;
			F[1][1] = w;
		}	
		
		void power(int F[2][2], int N)
		{
			int M[2][2] = {{1,1}, {1,0}};
			
			for (int i = 2; i <=N; i++)
				multiply(F,M);
		}
		
		int fibonacci(int N)
		{
			int F[2][2] = {{1,1},{1,0}};
			if (N == 0)
				return 0;
			power(F, N-1);
			return F[0][0];
		}
		
};

int fibonacci_DP_memset(int N)
{
	if (N <= 1)
		return N;
	int first, second;
	
	if (dp[N-1] != -1)
		first = dp[N-1];
	else
		first = fibonacci_DP_memset(N-1);
	
	if (dp[N-2] != -1)
		second = dp[N-2];
	else
		second = fibonacci_DP_memset(N-2);
	
	return dp[N] = first + second;
	
	
}


int main()
{
	int arr[1000], N;
	cin>>N;
	
	cout<< fibonacci_DP(N)<<endl;
	cout<< fibonacci_recursion(N)<<endl;
	cout<< fibonacci_space_optimized(N)<<endl;
	cout<< fibonacci_formula(N)<<endl;
	
	fibMatrix fm;
	cout<<fm.fibonacci(N)<<endl;
	
	memset(dp, -1, sizeof(dp));
	
	cout<< fibonacci_DP_memset(N)<<endl;
}