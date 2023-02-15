#include <iostream>
using namespace std;

template<typename T>
T rectangle(T n, T k)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t i = 0; i < k; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}


int main()
{
	int n, k;
	cout << "Enter hight: ";
	cin >> n;
	cout << "Enter lenghth: ";
	cin >> k;
	rectangle(n, k);

	return 0;
}