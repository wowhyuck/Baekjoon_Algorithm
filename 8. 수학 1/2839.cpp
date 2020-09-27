#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void bag_num(const int& w_num);


int main()
{
	int w_num;
	cin >> w_num;

	bag_num(w_num);

	return 0;
}


void bag_num(const int& w_num)
{
	// 3kg 개수 = x, 5kg 개수 = y, w_num = 3x + 5y
	vector<int> sum{};						// x + y
	for (int x = 0; x <= (w_num / 3); x++)
	{
		if (((-3 * x + w_num) % 5) == 0)
		{
			int y = (-3 * x + w_num) / 5;
			sum.push_back(x + y);
		}
	}

	if (sum.size() == 0)
		cout << -1;
	else
		cout << *min_element(sum.begin(), sum.end());

}