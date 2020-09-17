#include <iostream>
#include <vector>
#include <limits>

using namespace std;


int main()
{
	vector<int> num_arr{};
	int num_size;

	cin >> num_size;
	num_arr.resize(num_size);

	int max_num = std::numeric_limits<int>::min();		// 최댓값 초기화
	int min_num = std::numeric_limits<int>::max();		// 최솟값 초기화

	for (int i = 0; i < num_size; i++)
	{
		cin >> num_arr[i];

		if (num_arr[i] > max_num)
			max_num = num_arr[i];
		if (num_arr[i] < min_num)
			min_num = num_arr[i];
	}

	cout << min_num << " " << max_num << endl;			// 최솟값과 최댓값 출력

	return 0;
}