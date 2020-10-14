#include <iostream>
#include <vector>

using namespace std;

vector<int> rank_func(const vector<int>& w_arr, const vector<int>& h_arr, vector<int>& rank_arr)
{
	for (int i = 0; i < rank_arr.size(); i++)
		rank_arr[i] = 1;

	for (int i = 0; i < rank_arr.size(); i++)
	{
		for (int j = 0; j < rank_arr.size(); j++)
		{
			if ((w_arr[i] < w_arr[j]) && (h_arr[i] < h_arr[j]))
				rank_arr[i]++;
		}
	}

	return rank_arr;
}


int main()
{
	int num;
	cin >> num;

	vector<int> w_arr(num);
	vector<int> h_arr(num);

	for (int i = 0; i < num; i++)
		cin >> w_arr[i] >> h_arr[i];

	vector<int> rank(num);
	rank = rank_func(w_arr, h_arr, rank);

	for (auto& e : rank)
		cout << e << " ";

	return 0;
}