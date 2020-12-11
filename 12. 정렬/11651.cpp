#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool cmp_ptr(pair<int, int>& a, pair<int, int>& b)
{
	if (a.second == b.second)
		return a.first < b.first;
	else
		return a.second < b.second;
}

int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> ptr(n);

	for (int i = 0; i < n; i++)
		cin >> ptr[i].first >> ptr[i].second;

	sort(ptr.begin(), ptr.end(), cmp_ptr);

	for (auto e : ptr)
		cout << e.first << " " << e.second << "\n";

	return 0;
}