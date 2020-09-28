#include <iostream>

using namespace std;


int main()
{
	int input_num, num, i;
	cin >> input_num;

	num = 0;
	for (i = 1; num < input_num; i++)
	{
		num += i;	
	}

	int x = num - input_num;

	if ((i - 1) % 2 != 0)
		cout << 1 + x << "/" << (i - 1) - x;
	else
		cout << (i - 1) - x << "/" << 1 + x;

	return 0;
}