#include <iostream>

int main()
{
	int num[10];
	int div[43] = {0,};

	for(int i = 0; i < 10; i++) {
		std::cin >> num[i];
	}

	for(int i = 0; i < 10; i++) {
		int idx = num[i] % 42;
		div[idx]++;
	}

	int diff = 0;
	for(int i = 0; i <= 42; i++) {
		if(div[i] != 0) diff++;
	}

	std::cout << diff << std::endl;

	return 0;
}
