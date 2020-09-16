#include <iostream>

using namespace std;

int add_cycle(int num);


int main()
{
	int num;
	int count = 0;

	while (cin >> num)
	{
		int count = add_cycle(num);
		cout << count << endl;
	}

	return 0;
}


int add_cycle(int num)
{
	int count = 0;
	int result = num;
	do
	{
		int digit1 = result / 10;
		int digit2 = result % 10;

		int sum = digit1 + digit2;
		int digit11 = sum / 10;
		int digit22 = sum % 10;

		result = digit2 * 10 + digit22;
		count++;
	} while (num != result);

	return count;
}