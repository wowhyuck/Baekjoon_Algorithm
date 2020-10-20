#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int num;
	cin >> num;
	vector<int> n_arr(num);
	for (int i = 0; i < num; i++)
		cin >> n_arr[i];

	for (int i = 0; i < num - 1; i++)
	{
		for (int j = i + 1; j < num; j++)
		{
			if (n_arr[i] > n_arr[j])
			{
				int temp = n_arr[i];
				n_arr[i] = n_arr[j];
				n_arr[j] = temp;
			}
		}
	}

	for (auto& e : n_arr)
	{
		cout << e << endl;
	}

	return 0;
}