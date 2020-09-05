#include <iostream>
#include <string>

int main()
{
	int num;
	std::string str;

	std::cin >> num;

	for(int i = 0; i < num; i++) {
		std::cin >> str;

		int sum = 0;
		int getScore = 1;
		for(int j = 0; j < str.size(); j++) {
			if(str[j] == 'O') {
				sum += getScore;
				getScore++;
			}
			else if(str[j] == 'X') {
				getScore = 1;
			}
		}
		std::cout << sum << std::endl;
		str.clear();
	}

	return 0;
}

