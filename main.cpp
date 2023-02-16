#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T MinMax( T arr[], const T size)
{
	T min, max, min_i, max_i;
	cout << "Array:\t";
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	min = max = arr[0];
	for (size_t i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			min_i = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			max_i = i;
		}
	}
	cout << endl;
	cout << "Min:\t";
	cout << "Value = \"" << min << "\"\t";
	cout << "Index = [" << min_i << "]" << endl;
	cout << "Max:\t";
	cout << "Value = \"" << max << "\"\t";
	cout << "Index = [" << max_i << "]" << endl;
	return 0;
}

int main()
{
	
	int min, max, min_i, max_i, minmax;
	const int size = 10;
	int arr[size];
	MinMax(arr, size);

	return 0;
}