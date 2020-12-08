#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(n);

	for (int i = 0; i < arr.size(); i++)
		cin >> arr[i];

	sort(arr.begin(), arr.end());

	// »ê¼úÆò±Õ
	double avg = 0;
	for (int i = 0; i < arr.size(); i++)
		avg += arr[i];
	avg /= arr.size();

	cout << round(avg) << endl;

	// Áß¾Ó°ª
	int midValue = arr[arr.size() / 2];
	cout << midValue << endl;

	// ÃÖºó°ª
	vector<int> cnt_arr;
	vector<int> cum_arr;
	cnt_arr.push_back(1);
	cum_arr.push_back(1);
	int pre = arr[0];

	if (n == 1)
		cout << pre << endl;
	else
	{
		for (int i = 1; i < arr.size(); i++)
		{
			if (pre == arr[i])
			{
				*(cnt_arr.end() - 1) += 1;
				*(cum_arr.end() - 1) += 1;
			}
			else
			{
				int cum_cnt = *(cum_arr.end() - 1);
				cum_arr.push_back(cum_cnt + 1);
				cnt_arr.push_back(1);
				pre = arr[i];
			}
		}

		int maxValue = *max_element(cnt_arr.begin(), cnt_arr.end());
		int maxIndex = max_element(cnt_arr.begin(), cnt_arr.end()) - cnt_arr.begin();

		cnt_arr[maxIndex] = 0;

		int maxValue2 = *max_element(cnt_arr.begin(), cnt_arr.end());
		if (maxValue > maxValue2)
		{
			maxIndex = cum_arr[maxIndex] - 1;
			cout << arr[maxIndex] << endl;
		}
		else
		{
			maxIndex = max_element(cnt_arr.begin(), cnt_arr.end()) - cnt_arr.begin();
			maxIndex = cum_arr[maxIndex] - 1;
			cout << arr[maxIndex] << endl;
		}
	}

	// ¹üÀ§
	int range = arr[n - 1] - arr[0];
	cout << range << endl;

	return 0;
}