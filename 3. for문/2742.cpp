#include <iostream>

using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int num;
	cin >> num;

	for (int i = num; i > 0; i--)
	{
		cout << i << "\n";
	}

	return 0;
}