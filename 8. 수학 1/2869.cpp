#include <iostream>

using namespace std;

int main()
{

	int a_num, b_num, v_num, ans;
	cin >> a_num >> b_num >> v_num;

	if(((v_num - b_num) % (a_num - b_num)) == 0)
		ans = (v_num - b_num) / (a_num - b_num);
	else
		ans = (v_num - b_num) / (a_num - b_num) + 1;

	cout << ans;

	return 0;
}