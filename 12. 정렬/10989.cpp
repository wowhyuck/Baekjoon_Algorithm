#include <iostream>

using namespace std;

int arr[10001];

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, input;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> input;
		arr[input]++;
	}

	for (int i = 0; i < 10001; i++)
	{
		while (arr[i] != 0)
		{
			cout << i << "\n";
			arr[i]--;
		}
	}
	return 0;
}