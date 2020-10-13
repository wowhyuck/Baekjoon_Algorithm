#include <iostream>

using namespace std;

int digit_func(int num)
{
	int count = 0;
	while (num != 0)
	{
		num /= 10;
		count++;
	}

	return count;
}

int con_func(int num)
{
	int sum = num;
	while (num != 0)
	{
		sum += (num % 10);
		num /= 10;
	}

	return sum;
}


int main()
{
	int num, digit;
	cin >> num;

	digit = digit_func(num);
	int d = num - digit * 9;

	if (d < 0)
	{
		for (int i = 0; i <= num; i++)
		{
			if (con_func(i) == num)
			{
				cout << i;
				break;
			}
			else if (i == num)
				cout << 0;
		}
	}
	else
	{
		for (int i = d; i <= num; i++)
		{
			if (con_func(i) == num)
			{
				cout << i;
				break;
			}
			else if (i == num)
				cout << 0;
		}
	}

	return 0;
}