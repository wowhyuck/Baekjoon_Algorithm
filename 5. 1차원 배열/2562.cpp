#include <iostream>
#include <limits>

using namespace std;


int main()
{
	int num_arr[9];
	int max_num = std::numeric_limits<int>::min();			// �ִ� �ʱ�ȭ
	int max_idx;											// �ִ� �ε��� ����

	for (int i = 0; i < 9; i++)
	{
		cin >> num_arr[i];
		if (num_arr[i] > max_num)
		{
			max_num = num_arr[i];
			max_idx = i;
		}
	}

	cout << max_num << endl;
	cout << max_idx + 1 << endl;

	return 0;
}