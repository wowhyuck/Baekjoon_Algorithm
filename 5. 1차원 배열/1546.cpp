#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int num;
	cin >> num;
	vector<double> score{};
	score.resize(num);
	double max_num = 0;
	double average = 0;

	for (int i = 0; i < num; i++)
	{
		cin >> score[i];
		if (score[i] > max_num)
			max_num = score[i];
	}

	for (auto& element : score)
	{
		element = (element/max_num) * 100;
		average += element;
	}

	average /= num;

	cout << average << endl;

	return 0;
}