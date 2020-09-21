#include <iostream>
#include <vector>

using namespace std;

void isometric(int num, int& count)
{
	bool is_same = false;
	while (num != 0)
	{
		if (num >= 100)
		{
			int diff1 = ((num / 10) % 10) - (num % 10);

			num = num / 10;

			int diff2 = ((num / 10) % 10) - (num % 10);

			if (diff1 == diff2)
				is_same = true;
			else
				is_same = false;
		}
		else
			break;
	}

	if (is_same)
		count++;
}


int main()
{
	int num;
	int count = 0;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (i < 100)
			count++;
		else
			isometric(i, count);
	}

	cout << count << endl;

	return 0;
}