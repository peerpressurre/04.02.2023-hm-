#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T MinMax(T arr[], const T size)
{   
        int primes = 0;
	cout << "Array:\t";
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 20;
		cout << arr[i] << "\t";
	}
	cout << endl;

	for (size_t i = 0; i < size; i++)
	{
		int counter = 0;
		for (size_t j = 1; j < 20; j++)
		{
			if (arr[i] % j == 0)
			{
				counter++;
			}
		}
		if (counter == 2)
		{
			primes++;
		}
	}
	cout << "Number of prime numbers: " << primes << endl;
	return 0;
}

int main()
{
	const int size = 10;
	int arr[size];
	MinMax(arr, size);
	return 0;
}
