#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void Eratos(int n);


int main()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;

		Eratos(2 * n);
	}

	return 0;
}


void Eratos(int n)
{
	if (n <= 1);

	vector<bool> prime_arr{};
	prime_arr.resize(n + 1);

	for (int i = 2; i <= n; i++)
		prime_arr[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (prime_arr[i])
			for (int j = i * i; j <= n; j += i)
				prime_arr[j] = false;
	}

	int count = 0;
	for (int i = (n / 2) + 1; i <= n; i++)
	{
		if (prime_arr[i])
			count++;
	}

	cout << count << "\n";
}