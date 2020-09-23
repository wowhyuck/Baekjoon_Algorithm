#include <iostream>

using namespace std;


int main()
{
	int test_num;
	cin >> test_num;

	for (int i = 0; i < test_num; i++)
	{
		int iter_num;
		string word;
		cin >> iter_num >> word;
		
		for (int j = 0; j < word.size(); j++)
		{
			for (int k = 0; k < iter_num; k++)
				cout << word[j];
		}

		cout << endl;
	}

	return 0;
}