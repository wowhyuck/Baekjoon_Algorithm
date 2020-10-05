#include <iostream>

using namespace std;


int main()
{
	double r;
	cin >> r;

	double pi = 3.14159265358979;

	double u_ans = r * r * pi;		// 유클리드 기하학의 원 넓이
	double t_ans = 2 * r * r;			// 택시 기하학의 원 넓이

	printf("%.6f\n", u_ans);
	printf("%.6f", t_ans);

	return 0;
}