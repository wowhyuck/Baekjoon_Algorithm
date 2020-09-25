#include <iostream>
#include <string>

using namespace std;

int get_time(string& word)
{
	int time = 0;
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] <= 'O')
		{
			int num = word[i] - 'A';
			num = (num / 3) + 2;
			time += num;
		}
		else if (word[i] <= 'S')
		{
			time += 7;
		}
		else if (word[i] <= 'V')
		{
			time += 8;
		}
		else
		{
			time += 9;
		}
	}

	return time + word.size();
}

int main()
{
	string word;
	cin >> word;

	int total_time = get_time(word);
	cout << total_time;

	return 0;
}