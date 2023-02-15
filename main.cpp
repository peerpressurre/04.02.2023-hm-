#include <iostream>
using namespace std;

template<typename T>
bool TrueFalse(T n)
{
	if (n > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cout << "Enter num: ";
	cin >> n;

	cout << TrueFalse(n);
	if (TrueFalse(n) == 0)
	{
		cout << " (False)" << endl;
	}
	else if (TrueFalse(n) == 1)
	{
		cout << " (True)" << endl;
	}
	return 0;
}