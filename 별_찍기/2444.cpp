#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	for (int i = 0; i < n * 2 - 1; i++)
	{
		cout << "*";
	}
	cout << "\n";

	for (int i = n - 1; 0 < i; i--)
	{
		for (int j = 0; j < n - i; j++)
		{
			cout << " ";
		}

		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
