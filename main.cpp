#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T MinMax(T min, T max, T min_i, T max_i,/* T arr[],*/ const T size, T i)
{
	srand(time(0));
	int arr[size];
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
	cout << "Min: [" << min_i << "] " << min << endl;
	cout << "Max: [" << max_i << "] " << max << endl;
}

int main()
{
	
	int min, max, min_i, max_i, arr, i;
	const int size = 10;
	MinMax(min, max, min_i, max_i,/* arr,*/ size, i);

	return 0;
}