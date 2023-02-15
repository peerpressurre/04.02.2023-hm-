#include <iostream>
using namespace std;

template<typename T>
T Prime(T n, T counter)
{
	for (size_t i = 1; i < 50; i++)
	{
		if (n % i == 0 )
		{
			counter++;
		}
	}
	if (counter == 2)
	{
		cout << "The number is prime" << endl;
	}
	else
	{
		cout << "The number is not prime" << endl;
	}
	return 0;
}

int main()
{
	int n, counter = 0;
	cout << "Enter num: ";
	cin >> n;
	Prime(n,counter);
	return 0;
}