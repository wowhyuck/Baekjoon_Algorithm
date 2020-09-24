#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	vector<int> alpha_count{};
	alpha_count.resize(27);

	string word;
	cin >> word;

	for (int i = 0; i < word.size(); i++)
	{
		int ch = toupper(word[i]);
		alpha_count[ch - 'A']++;
	}

	int max_num = 0;
	int max_idx = 0;
	bool is_only = true;
	
	for (int i = 0; i < alpha_count.size(); i++)
	{
		if (alpha_count[i] > max_num)
		{
			max_num = alpha_count[i];
			max_idx = i;
			is_only = true;
		}
		else if (alpha_count[i] == max_num)
		{
			is_only = false;
		}

	}

	if (is_only)
	{
		cout << static_cast<char>('A' + max_idx);
	}
	else
	{
		cout << '?';
	}
	return 0;
}