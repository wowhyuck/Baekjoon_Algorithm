#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void board(char board[][8], char a)
{
	board[0][0] = a;

	for (int i = 0; i < 8; i++)
	{
		if (i > 0)
		{
			if (board[i - 1][0] == 'B')
				board[i][0] = 'W';
			else
				board[i][0] = 'B';
		}

		for (int j = 0; j < 7; j++)
		{
			if (board[i][j] == 'B')
				board[i][j + 1] = 'W';
			else
				board[i][j + 1] = 'B';
		}
	}
}


int getCount(char arr[][50], int row, int col, char board[8][8])
{
	int count = 0;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j ++)
		{
			if (arr[i + row][j + col] != board[i][j])
				count++;
		}
	}

	return count;
}


int main()
{
	int n, m, min_count;
	cin >> n >> m;

	char in_arr[50][50];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> in_arr[i][j];
		}
	}

	char bw[8][8];
	board(bw, 'B');

	char wb[8][8];
	board(wb, 'W');

	vector<int> count_arr;

	for (int i = 0; i < n - 7; i++)
	{
		for (int j = 0; j < m - 7; j++)
		{
			count_arr.push_back(getCount(in_arr, i, j, bw));
			count_arr.push_back(getCount(in_arr, i, j, wb));
		}
	}

	min_count = *min_element(count_arr.begin(), count_arr.end());

	cout << min_count;

	return 0;
}