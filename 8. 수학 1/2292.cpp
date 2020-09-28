#include <iostream>

using namespace std;


int main()
{
	int input_num, num, i;
	cin >> input_num;

	num = 1;
	for (i = 1; num < input_num; i++)
	{
		num += i * 6;
	}

	cout << i;

	return 0;
}