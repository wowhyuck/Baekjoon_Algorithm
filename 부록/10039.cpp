#include <iostream>
#include <vector>

using namespace std;


int main()
{
	vector<int> score_arr{};
	score_arr.resize(5);

	int sum = 0;
	
	for (int i = 0; i < score_arr.size(); i++)
	{
		cin >> score_arr[i];
		if (score_arr[i] <= 40) 
			score_arr[i] = 40;
		sum += score_arr[i];
	}

	cout << sum / score_arr.size() << endl;

	return 0;
}