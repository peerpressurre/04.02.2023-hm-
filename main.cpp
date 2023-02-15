#include <iostream>
using namespace std;

template<typename T>
T factorial(T n, T fact)
{
	cout << "Factorial(" << n << "): ";
	for (size_t i = 1; i < n+1; i++)
	{
		fact *= i;
		if (i == n)
		{
			cout << i;
		}
		else
		{
			cout << i << " * ";
		}
	}
	cout << " = " << fact;
	return 0;
}


int main()
{
	int n, fact = 1;
	cout << "Enter num: ";
	cin >> n;
	
	factorial(n, fact);

	return 0;
}