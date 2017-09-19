#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;


int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	bool prime[1041] = { 0 };
	prime[1] = 1;
	for (int i = 1; i < 1041; i++)
	{
		bool flag = 0;
		for (int j = 2; j < i; j++)
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		if (!flag)
			prime[i] = 1;
	}
	char a[21];
	while (cin >> a)
	{
		int sum = 0;
		for (int i = 0; i < strlen(a); i++)
		{
			if (a[i] > 90)
				sum += a[i] - 96;
			else
				sum += a[i] - 38;
		}
		if (prime[sum])
			cout << "It is a prime word." << endl;
		else
			cout << "It is not a prime word." << endl;
	}
	return 0;
}