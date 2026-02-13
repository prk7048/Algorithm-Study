#include <iostream>
int main(void)
{

	int N, M;
	std::cin >> N >> M; 
	int arr[100] = { 0, };

	for (int i = 0; i < N; i++)
		std::cin >> arr[i];

	int close_value = 0;
	int now_value;

	// 가장 가까운 값 찾기
	for (int j = 0; j < N-2; j++)
	{
		for (int k = j+1; k < N-1; k++)
		{
			for (int l = k+1; l < N; l++)
			{
				now_value = arr[j] + arr[k] + arr[l];
				if (now_value > M)
				{
					now_value = close_value;
					continue;
				}
				// 갭이 close_value보다 가까우면 그 값으로 대체
				if (now_value > close_value)
				{
					close_value = now_value;
				}
			}
		}

	}

	std::cout << close_value;

}