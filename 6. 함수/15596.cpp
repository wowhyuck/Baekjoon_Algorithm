#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int>& a)
{
	long long result = 0;
	for (int i = 0; i < a.size(); i++)
		result += a[i];
	return result;
}


int main()
{
	int num;
	cin >> num;
	
	vector<int> num_arr{};
	num_arr.resize(num);

	for (int i = 0; i < num; i++)
	{
		cin >> num_arr[i];
	}

	long long result = sum(num_arr);

	cout << result << endl;

	return 0;
}