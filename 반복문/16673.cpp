#include <iostream>

using namespace std;

int main()
{
	int c, k, p, sum = 0;

	cin >> c >> k >> p;

	for (int i = 0; i <= c; i++)
	{
		sum += (k * i + p * i * i);
	}

	cout << sum << endl;

	return 0;
}
