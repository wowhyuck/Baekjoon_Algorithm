#include <iostream>
#include <vector>

using namespace std;

void Eratos(const int& n, vector<bool>& prime_arr);


int main()
{
	int test;
	cin >> test;

	vector<bool> prime_arr{};

	Eratos(10000, prime_arr);

	for (int i = 0; i < test; i++)
	{
		int num;
		cin >> num;

		int prime1 = 0, prime2 = 0;

		for (int j = 2, k = num - j; j <= k; j++)
		{
			k = num - j;
			if ((prime_arr[j] == true) && (prime_arr[k] == true))
			{
				prime1 = j;
				prime2 = k;
			}
		}
		cout << prime1 << " " << prime2 << "\n";
	}

	return 0;
}


void Eratos(const int& n, vector<bool>& prime_arr)
{
	if (n <= 1);

	prime_arr.resize(n + 1);

	for (int i = 2; i <= n; i++)
		prime_arr[i] = true;

	for (int i = 2; i * i <= n; i++)
	{
		if (prime_arr[i])
			for (int j = i * i; j <= n; j += i)
				prime_arr[j] = false;
	}
}