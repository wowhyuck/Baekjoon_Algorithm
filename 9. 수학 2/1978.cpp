#include <iostream>
#include <cmath>

using namespace std;

void count_prime(int& num, int& count);


int main()
{
	int input_num;
	cin >> input_num;

	int count = 0;

	for (int i = 0; i < input_num; i++)
	{
		int num;
		cin >> num;

		count_prime(num, count);
	}

	cout << count;

	return 0;
}


void count_prime(int& num, int& count)
{
	bool is_prime = true;

	if (num == 1)
		is_prime = false;
	else
	{
		for (int i = 1; i <= sqrt(num); i++)
		{
			if (i == 1)
				continue;
			else if (num % i == 0)
			{
				is_prime = false;
				break;
			}
		}
	}

	if (is_prime == true)
		count++;
}