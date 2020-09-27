#include <iostream>

using namespace std;

int num_break_even(const int& fix_cost, const int& var_cost, const int& price);


int main()
{
	int fix_cost, var_cost, price;
	cin >> fix_cost >> var_cost >> price;

	cout << num_break_even(fix_cost, var_cost, price);

	return 0;
}

int num_break_even(const int& fix_cost, const int& var_cost, const int& price)
{
	if (price == var_cost)
		return -1;
	else
	{
		int num = fix_cost / (price - var_cost) + 1;

		if (num > 0)
			return num;
		else
			return -1;
	}
}

