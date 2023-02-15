#include <iostream>
using namespace std;

template<typename T>
T Comparison(T i, T j)
{
	if (i > j)
	{
		cout << i << " > " << j;
	}
	else
	{
		cout << j << " > " << i;
	}
	return 0;
}


int main()
{
	int i, j;
	cout << "Enter i: ";
	cin >> i;
	cout << endl;
	cout << "Enter j: ";
	cin >> j;
	Comparison(i, j);
	return 0;
}