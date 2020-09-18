#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> remainder_num{};
	remainder_num.resize(10);
	int count = remainder_num.size();

	for (int i = 0; i < remainder_num.size(); i++)
	{
		cin >> remainder_num[i];
		remainder_num[i] %= 42;

		if (i > 0) 
		{
			for (int j = i - 1; j >= 0; j--)
			{
				if (remainder_num[i] == remainder_num[j])
				{
					count--;
					break;
				}
			}
		}
	}

	cout << count;

	return 0;
}