#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main()
{
	int test;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		vector<double> x{};
		x.resize(2);

		vector<double> y{};
		y.resize(2);

		vector<double> r{};
		r.resize(2);

		for (int j = 0; j < 2; j++)
			cin >> x[j] >> y[j] >> r[j];

		double x_dis = abs(x[0] - x[1]);
		double y_dis = abs(y[0] - y[1]);

		double dis = sqrt(x_dis * x_dis + y_dis * y_dis);

		double min_r = *min_element(r.begin(), r.end());
		double max_r = *max_element(r.begin(), r.end());

		// 한 원중심이 다른 원 안에 있을 때
		if (dis < max_r)
		{
			// 두 원이 동일할 때
			if (abs(dis < 1e-8) && (abs(max_r - min_r) < 1e-8))
				cout << -1 << "\n";

			// 내접할 때
			else if (abs((dis + min_r) - max_r) < 1e-8)
				cout << 1 << "\n";

			// 두 원이 접하지 않을 때
			else if ((dis + min_r) < max_r)
				cout << 0 << "\n";

			// 두 원이 교차할 때
			else if ((dis + min_r) > max_r)
				cout << 2 << "\n";
		}

		// 한 원중심이 다른 원 밖에 있을 때
		else
		{
			// 외접 할 때
			if (abs(dis - (max_r + min_r)) < 1e-8)
				cout << 1 << "\n";

			// 두 원이 교차할 때
			else if ((max_r + min_r) > dis)
				cout << 2 << "\n";

			// 두 원이 접하지 않을 때
			else if ((max_r + min_r) < dis)
				cout << 0 << "\n";
		}
	}

	return 0;
}