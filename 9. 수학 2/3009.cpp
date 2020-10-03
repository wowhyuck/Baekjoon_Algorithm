#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> x_arr{};
	x_arr.resize(3);
	vector<int> y_arr{};
	y_arr.resize(3);

	for (int i = 0; i < 3; i++)
	{
		cin >> x_arr[i];
		cin >> y_arr[i];
	}

	int temp_x = 0, temp_y = 0;

	temp_x = (x_arr[0] == x_arr[1]) ? x_arr[2] : x_arr[0];
	if (temp_x == x_arr[0] && temp_x == x_arr[2])
		temp_x = x_arr[1];

	temp_y = (y_arr[0] == y_arr[1]) ? y_arr[2] : y_arr[0];
	if (temp_y == y_arr[0] && temp_y == y_arr[2])
		temp_y = y_arr[1];

	cout << temp_x << " " << temp_y;

	return 0;
}