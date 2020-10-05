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

		// �� ���߽��� �ٸ� �� �ȿ� ���� ��
		if (dis < max_r)
		{
			// �� ���� ������ ��
			if (abs(dis < 1e-8) && (abs(max_r - min_r) < 1e-8))
				cout << -1 << "\n";

			// ������ ��
			else if (abs((dis + min_r) - max_r) < 1e-8)
				cout << 1 << "\n";

			// �� ���� ������ ���� ��
			else if ((dis + min_r) < max_r)
				cout << 0 << "\n";

			// �� ���� ������ ��
			else if ((dis + min_r) > max_r)
				cout << 2 << "\n";
		}

		// �� ���߽��� �ٸ� �� �ۿ� ���� ��
		else
		{
			// ���� �� ��
			if (abs(dis - (max_r + min_r)) < 1e-8)
				cout << 1 << "\n";

			// �� ���� ������ ��
			else if ((max_r + min_r) > dis)
				cout << 2 << "\n";

			// �� ���� ������ ���� ��
			else if ((max_r + min_r) < dis)
				cout << 0 << "\n";
		}
	}

	return 0;
}