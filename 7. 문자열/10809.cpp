#include <iostream>

using namespace std;


int main()
{
	string word;
	cin >> word;

	for (int i = 'a'; i <= 'z'; i++)
	{
		bool is_in = false;

		for (int j = 0; j < word.size(); j++)
		{
			if (static_cast<int>(word[j]) == i)
			{
				cout << j << " ";
				is_in = true;
				break;
			}
		}

		if (is_in == false)
			cout << "-1 ";
	}

	return 0;
}