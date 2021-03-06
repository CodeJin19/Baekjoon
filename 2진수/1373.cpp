#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	int len, digit, idx;

	cin >> s;

	len = s.length();

	if (len % 3 == 2)
	{
		digit = 0;

		if (s[0] == '1')
		{
			digit += 2;
		}

		if (s[1] == '1')
		{
			digit += 1;
		}

		cout << digit;

		idx = 2;
	}
	else if (len % 3 == 1)
	{
		digit = 0;

		if (s[0] == '1')
		{
			digit += 1;
		}

		cout << digit;

		idx = 1;
	}

	for (; idx < len;)
	{
		digit = 0;
		
		if (s[idx] == '1')
		{
			digit += 4;
		}

		idx++;

		if (s[idx] == '1')
		{
			digit += 2;
		}

		idx++;

		if (s[idx] == '1')
		{
			digit += 1;
		}

		idx++;

		cout << digit;
	}

	cout << endl;

	return 0;
}

/* ----------------------------------------------------------------
int main()
{
	string s;
	int len, digit, idx, tmp;

	cin >> s;

	len = s.length();

	if (len % 3 == 2)
	{
		digit = 0;

		if (s[0] == '1')
		{
			digit += 2;
		}

		if (s[1] == '1')
		{
			digit += 1;
		}

		cout << digit;

		idx = 2;
	}
	else if (len % 3 == 1)
	{
		digit = 0;

		if (s[0] == '1')
		{
			digit += 1;
		}

		cout << digit;

		idx = 1;
	}

	for (; idx < len;)
	{
		digit = 4;
        tmp = 0;
        
        for(int i = 0; i < 3; i++)
        {
            if (s[idx] == '1')
    		{
                tmp += digit;
    		}

	    	idx++;
            digit /= 2;
        }

		cout << tmp;
	}

	cout << endl;

	return 0;
}
*/
