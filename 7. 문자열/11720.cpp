#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int input_size;
	cin >> input_size;

	string input_num;
	cin >> input_num;

	int sum = 0;

	for (int i = 0; i < input_size; i++)
	{
		int num = input_num[i] - 48;
		sum += num;
	}

	cout << sum << endl;

	return 0;
}