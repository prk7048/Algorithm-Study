#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
	int N, num;
	std::cin >> N;

	std::vector<int> v;
	for (int i = 0; i < N; i++)
	{
		std::cin >> num;
		v.push_back(num);
	}

	std::sort(v.begin(), v.end());

	v.erase(unique(v.begin(), v.end()), v.end());

	for (int i = 0; i < v.size(); i++)
	{
		std::cout << v[i] << "\n";
	}

	return 0;
}