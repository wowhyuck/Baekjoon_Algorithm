#include <iostream>
#include <vector>

using namespace std;


int main()
{
	int case_num;
	int students;
	cin >> case_num;

	for (int i = 0; i < case_num; i++)
	{
		cin >> students;
		int count = 0;
		int avg = 0;
		vector<double> score;

		for (int j = 0; j < students; j++)
		{
			score.resize(students);
			cin >> score[j];
			avg += score[j];
		}
		avg /= students;

		for (int j = 0; j < students; j++)
		{
			if (score[j] > avg)
				count++;
		}

		double rate = double(count) / double(students) * 100;
		
		printf("%.3f%%\n", rate);
	}

	return 0;
}