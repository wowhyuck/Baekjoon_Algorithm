#include <iostream>

using namespace std;


int main()
{
	int t, h, w, n;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> h >> w >> n;

		int x = ((n - 1) / h) + 1;
		int y = n % h;

		if (y == 0)
			cout << h;
		else
			cout << y;

		if (x < 10)
			cout << 0 << x << endl;
		else
			cout << x << endl;
	}

	return 0;
}