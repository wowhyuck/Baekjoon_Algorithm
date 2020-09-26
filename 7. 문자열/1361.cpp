#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void check_group(const string& word, int& count)
{
	bool is_group = false;
	vector<char> array{};

	for (int i = 0; i < word.size(); i++)
	{
		if (array.size() == 0 || (find(array.begin(), array.end(), word[i]) == array.end()))
		{
			array.push_back(word[i]);
			is_group = true;
		}
		else if ((find(array.begin(), array.end(), word[i]) != array.end()) && (word[i] == word[i - 1]))
			is_group = true;
		else
		{
			is_group = false;
			break;
		}
	}

	if (is_group)
		count++;
}


int main()
{
	int input_num;
	cin >> input_num;

	int count = 0;

	for (int i = 0; i < input_num; i++)
	{
		string word;
		cin >> word;

		check_group(word, count);
	}

	cout << count;

	return 0;
}