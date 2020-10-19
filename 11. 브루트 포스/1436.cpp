#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> arr;
	int n;
	cin >> n;
	int count = 0;

	for (int i = 1; count != n; i++)
	{
		string i_str = to_string(i);

		if (i_str.find("666") != string::npos)
		{
			int j = stoi(i_str);
			arr.push_back(j);
			count++;
		}
	}

	cout << arr[n - 1];
	
	return 0;
}