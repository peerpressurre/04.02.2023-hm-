#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T MinMax(T arr[], T arr2[], const T size)
{
	cout << "Original Array:\t";
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Reversed Array:\t";
	for (size_t i = size - 1, j = 0; i >= 0; i--, j++)
	{
		arr2[j] = arr[i];
		cout << arr2[j] << "\t";
		if (i == 0)
		{
			break;
		}
	}
	return 0;
}

int main()
{
	const int size = 10;
	int arr[size];
	int arr2[size];
	MinMax(arr, arr2, size);
	return 0;
}
