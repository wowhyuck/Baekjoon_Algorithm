#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void remove_star(vector<char>& star_arr, int num, int row, int col)
{
	if (num == 1)
		return;
	else
	{
		for (int i = num / 3; i < (2 * num) / 3; i++)
		{
			for (int j = num / 3; j < (2 * num) / 3; j++)
				star_arr[sqrt(star_arr.size()) * (i + row) + (j + col)] = ' ';
		}

		for (int i = 0; i < num; i += num / 3)
		{
			for (int j = 0; j < num; j += num / 3)
				remove_star(star_arr, num / 3, (i + row), (j + col));
		}

	}
}


int main()
{
	int num;
	cin >> num;

	vector<char> star_arr(num * num);

	for (int i = 0; i < num * num; i++)
		star_arr[i] = '*';

	remove_star(star_arr, num, 0, 0);
		
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
			cout << star_arr[num * i + j];
		cout << '\n';
	}

	return 0;
}