#include <iostream>
#include <vector>

bool isPrime(int n)
{
	if (n < 2) return false;
	
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	
	return true;
}

int main(void)
{
	int N; 
	std::cin >> N;
	int i = 0;
	int count = 0;
	int num;
	while (i < N)
	{
		std::cin >> num;
		if (isPrime(num))
			count++;
		i++;
	}

	std::cout << count;

}