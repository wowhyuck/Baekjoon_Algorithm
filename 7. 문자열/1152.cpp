#include <iostream>
#include <string>

using namespace std;


int main()
{
	string sent;
	getline(cin, sent);
	int word_count = 0;

	for (int i = 0; i < sent.size(); i++)
	{
		if (!isspace(sent[i]))
		{
			if (i == 0)
				word_count++;
			else if (isspace(sent[i - 1]))
				word_count++;
		}
	}
	
	cout << word_count;

	return 0;
}