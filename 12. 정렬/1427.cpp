#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr;

	while (n != 0)
	{
		int digit = n % 10;
		arr.push_back(digit);
		n /= 10;
	}

	sort(arr.rbegin(), arr.rend());

	for (auto e : arr)
		cout << e;

	return 0;
}