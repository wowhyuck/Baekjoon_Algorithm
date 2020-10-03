#include <iostream>

using namespace std;


int main()
{
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int diff_x, diff_y;
	
	diff_x = (x > (w - x)) ? w - x : x;
	diff_y = (y > (h - y)) ? h - y : y;

	if (diff_x > diff_y)
		cout << diff_y;
	else
		cout << diff_x;

	return 0;
}
