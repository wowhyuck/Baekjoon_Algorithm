#include <iostream>
#include <string>

using namespace std;


int main()
{
	int input_num[3];						
	int count_arr[10] = { 0, };				// 0 ~ 9까지 반복 횟수 저장하는 배열
	int result = 1;							

	// 자연수 3개 입력받기
	for (int i = 0; i < 3; i++)
	{
		cin >> input_num[i];
		result *= input_num[i];				// 세 자연수의 곱의 결과
	}

	string result_str = std::to_string(result);			// 결과를 int -> string

	// 결과에 0 ~ 9마다 반복된 횟수 저장
	for (int i = 0; i < result_str.size(); i++)
	{
		count_arr[static_cast<int>(result_str[i]) - 48]++;
	}

	// 0 ~ 9까지 반복된 횟수 출력
	for (int i = 0; i < 10; i++)
	{
		cout << count_arr[i] << endl;
	}

	return 0;
}