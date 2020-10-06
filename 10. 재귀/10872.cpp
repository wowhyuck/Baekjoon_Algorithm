#include <iostream>

using namespace std;

int factorial_func(int num)
{
	if (num == 0)
		return 1;
	else
		return num * factorial_func(num - 1);
}

int main()
{
	int num;
	cin >> num;

	int ans = factorial_func(num);

	cout << ans;

	return 0;
}