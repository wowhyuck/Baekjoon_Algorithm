#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int num, x;
	int count = 0;

	cin >> num >> x;

	vector<int> arr{ 0, };

	for (int i = 0; i < num; i++)
	{
		int n;

		cin >> n;
		if (n < x)
		{
			count++;
			arr.resize(count);
			arr[count - 1] = n;
		}
	}

	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}