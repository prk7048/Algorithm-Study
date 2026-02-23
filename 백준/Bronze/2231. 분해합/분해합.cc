#include <iostream>

int main(void)
{

	// 입력받기
	int N;
	int result = 0;

	std::cin >> N;

	for (int i = 1; i < N; i++)
	{
		// 각자리의 수를 더하는 방법?
		int sum = i;
		int temp = i;

		while (temp > 0)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N)
		{
			result = i;
			break;
		}
	}

	std::cout << result << "\n";
	return 0;
}