#include <iostream>

using namespace std;


int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		long long x, y;
		cin >> x >> y;

		long long length = y - x;

		long long count;
		long long sum = 0;

		for (count = 0; length > sum; count++)
		{
			sum += (count / 2) + 1;
		}

		cout << count << endl;
	}
	return 0;
}
