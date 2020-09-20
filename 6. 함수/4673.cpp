#include <iostream>
#include <vector>
#include <cmath>

using namespace std;


int digit(int num, int digit_n)
{
	int remainder = pow(10, digit_n);
	int ans = (num % remainder) / pow(10, digit_n - 1);

	return ans;
}

int d_num(int num)
{
	int ans;

	if (num < 10)
	{
		ans = 2 * num;
		return ans;
	}
	else if (num < 100)
	{
		ans = num + digit(num, 2) + digit(num, 1);
		return ans;
	}

	else if (num < 1000)
	{
		ans = num + digit(num, 3) + digit(num, 2) + digit(num, 1);
		return ans;
	}

	else if (num < 10000)
	{
		ans = num + digit(num, 4) + digit(num, 3) + digit(num, 2) + digit(num, 1);
		return ans;
	}

}


int main()
{
	const int size = 10000;
	vector<int> num_arr {0, };

	for (int i = 1; i < size; i++)
	{
		if(d_num(i)>num_arr.size())
			num_arr.resize(d_num(i));
		num_arr[d_num(i) - 1]++;
	}

	for (int i = 0; i < size; i++)
	{
		if (num_arr[i] == 0)
			cout << i + 1 << endl;
	}

	return 0;
}