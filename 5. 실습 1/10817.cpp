#include <iostream>
#include <algorithm>
#include <limits>
#include <vector>

using namespace std;


int main()
{
	int max_num = std::numeric_limits<int>::min();
	int max_idx;
	int result = 0;

	vector<int> num_arr{};
	num_arr.resize(3);

	for (int i = 0; i < num_arr.size(); i++)
	{
		cin >> num_arr.at(i);
		if (num_arr[i] >= max_num)
		{
			max_num = num_arr[i];
			max_idx = i;
		}
	}

	num_arr.erase(num_arr.begin() + max_idx);

	for (auto& element : num_arr)
	{
		result = max(element, result);
	}

	cout << result << endl;

	return 0;
}