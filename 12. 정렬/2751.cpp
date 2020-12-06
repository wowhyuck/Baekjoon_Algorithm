#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, input;
	cin >> n;
	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr.push_back(input);
	}

	sort(arr.begin(), arr.end());

	for (auto e : arr)
		cout << e << "\n";

	return 0;
}