#include <iostream>

using namespace std;


int main()
{
	double r;
	cin >> r;

	double pi = 3.14159265358979;

	double u_ans = r * r * pi;		// ��Ŭ���� �������� �� ����
	double t_ans = 2 * r * r;			// �ý� �������� �� ����

	printf("%.6f\n", u_ans);
	printf("%.6f", t_ans);

	return 0;
}