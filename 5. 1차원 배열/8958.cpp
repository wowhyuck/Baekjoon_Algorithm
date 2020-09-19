#include <iostream>

using namespace std;


int main()
{
	int num;
	cin >> num;
	int count = 0;
	int score = 0;

	string ox_arr;

	for (int i = 0; i < num; i++)
	{
		cin >> ox_arr;
		for (int j = 0; j < ox_arr.size(); j++)
		{
			if (ox_arr[j] == 'O')
				count++;
			else
				count = 0;
			score += count;
		}

		cout << score << endl;
		count = 0; 
		score = 0;
	}

	return 0;
}