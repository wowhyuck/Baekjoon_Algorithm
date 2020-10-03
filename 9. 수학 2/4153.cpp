#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	while (1)
	{
		vector<int> num_arr{};
		num_arr.resize(3);
		int is_end = 0;

		for (int i = 0; i < 3; i++)
			cin >> num_arr[i];

		for (auto& element : num_arr)
		{
			if (element == 0)
				is_end++;
		}

		if (is_end == 3)
			break;

		int max_num = *max_element(num_arr.begin(), num_arr.end());

		max_num *= max_num;

		num_arr.erase(max_element(num_arr.begin(), num_arr.end()));

		int rest_num = 0;
		for (auto& element : num_arr)
		{
			element *= element;
			rest_num += element;

		}

		if (max_num == rest_num)
			cout << "right" << "\n";
		else
			cout << "wrong" << "\n";
	}

	return 0;
}