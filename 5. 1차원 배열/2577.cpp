#include <iostream>
#include <string>

using namespace std;


int main()
{
	int input_num[3];						
	int count_arr[10] = { 0, };				// 0 ~ 9���� �ݺ� Ƚ�� �����ϴ� �迭
	int result = 1;							

	// �ڿ��� 3�� �Է¹ޱ�
	for (int i = 0; i < 3; i++)
	{
		cin >> input_num[i];
		result *= input_num[i];				// �� �ڿ����� ���� ���
	}

	string result_str = std::to_string(result);			// ����� int -> string

	// ����� 0 ~ 9���� �ݺ��� Ƚ�� ����
	for (int i = 0; i < result_str.size(); i++)
	{
		count_arr[static_cast<int>(result_str[i]) - 48]++;
	}

	// 0 ~ 9���� �ݺ��� Ƚ�� ���
	for (int i = 0; i < 10; i++)
	{
		cout << count_arr[i] << endl;
	}

	return 0;
}