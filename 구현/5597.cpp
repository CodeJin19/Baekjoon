#include <iostream>

using namespace std;

int main()
{
	int person[35];
	int n;
	
	for (int i = 1; i < 31; i++)
	{
		person[i] = 1;
	}

	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		person[n] = 0;
	}

	for (int i = 1; i < 31; i++)
	{
		if (person[i] == 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}
