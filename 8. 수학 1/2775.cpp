#include <iostream>

using namespace std;

int ps_num(int k, int n);


int main()
{
	int t, k, n;
	cin >> t;


	for (int i = 0; i < t; i++)
	{
		cin >> k >> n;

		int ans = ps_num(k, n);

		cout << ans << endl;
	}

	return 0;
}


int ps_num(int k, int n) 
{
	if (k == 0)
		return n;

	else if (n == 1)
		return 1;

	else
	{
		return ps_num(k - 1, n) + ps_num(k, n - 1);
	}
}