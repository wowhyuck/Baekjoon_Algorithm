#include <iostream>

using namespace std;

void find_ct(const string& word, int& count)
{
	for (int i = 0; i < word.size(); i++)
	{
		if (word[i] == '=')
		{
			if (word[i - 1] == 'c' || word[i - 1] == 's')
				continue;
			else if (word[i - 1] == 'z')
			{
				if ((i > 1) && (word[i - 2] == 'd'))
					count--;
				else
					continue;
			}
		}

		else if (word[i] == '-')
		{
			if (word[i - 1] == 'c' || word[i - 1] == 'd')
				continue;
		}

		else if (word[i] == 'j')
		{
			if (word[i - 1] == 'l' || word[i - 1] == 'n')
				continue;
			else
				count++;
		}

		else
			count++;
	}
}


int main()
{
	string word;
	cin >> word;
	int count = 0;

	find_ct(word, count);

	cout << count;

	return 0;
}