#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	vector<int> num(n);
	vector<int> sum_arr;

	for (int i = 0; i < n; i++)
		cin >> num[i];

	for (int i = 0; i < n - 2; i++)
	{
		int sum = 0;

		if (num[i] > m)
			continue;

		for (int j = i + 1; j < n - 1; j++)
		{
			sum = num[i];
			if ((sum + num[j]) > m)
				continue;

			for (int k = j + 1; k < n; k++)
			{
				sum = num[i] + num[j];
				if (sum + num[k] <= m)
				{
					sum = num[i] + num[j] + num[k];
					sum_arr.push_back(sum);
				}
			}
		}
	}

	int ans = *max_element(sum_arr.begin(), sum_arr.end());

	std::cout << ans;

	return 0;
}