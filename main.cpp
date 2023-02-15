#include <iostream>
using namespace std;

template<typename T>
T Cube(T n, T res)
{
	res = n * n * n;
	cout << "Cube: " << res << endl;
	return 0;
}

int main()
{
	int n, res = 1;
	cout << "Enter num: ";
	cin >> n;
	Cube(n, res);
	return 0;
}