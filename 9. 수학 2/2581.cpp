#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool is_prime(int& num);


int main()
{
	int m, n;
	cin >> m >> n;

	int size = n - m + 1;
	vector<bool> num_arr{};
	num_arr.resize(size);

	int sum = 0;
	int min_prime;

	for (int i = 0; i < size; i++)
	{
		int num = i + m;

		num_arr[i] = is_prime(num);

		if (num_arr[i] == true)
			sum += num;
	}


	if (sum == 0)
		cout << -1;
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (num_arr[i] == true)
			{
				min_prime = i + m;
				break;
			}
		}

		cout << sum << endl;
		cout << min_prime << endl;
	}

	return 0;
}


bool is_prime(int& num)
{
	if (num == 1)
		return false;
	else
	{
		for (int i = 1; i <= sqrt(num); i++)
		{
			if (i == 1)
				continue;
			else if (num % i == 0)
			{
				return false;
				break;
			}
		}
	}

	return true;
}