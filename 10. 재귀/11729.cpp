#include <iostream>
#include <vector>

using namespace std;

void move(int from, int to, vector<int>& output)
{
	output.push_back(from);
	output.push_back(to);
}

void hanoi(int num, int from, int by, int to, vector<int>& output)
{
	if (num == 1)
		move(from, to, output);
	else
	{
		hanoi(num - 1, from, to, by, output);
		move(from, to, output);
		hanoi(num - 1, by, from, to, output);
	}
}


int main()
{
	int num;
	cin >> num;

	vector<int> output;

	hanoi(num, 1, 2, 3, output);

	cout << output.size() / 2 << endl;
	for (int i = 0; i < output.size(); i += 2)
		cout << output[i] << " " << output[i + 1] << "\n";

	return 0;
}