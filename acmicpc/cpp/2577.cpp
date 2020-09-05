#include <iostream>
#include <string>

int main()
{
	int num1, num2, num3;

	int zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0, six = 0, seven = 0, eight = 0, nine = 0;

	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;

	int total = num1 * num2 * num3;
	std::string str = std::to_string(total);

	for(int i = 0; i < str.size(); i++) {
		switch(str[i]) {
			case '0' : zero++; break;
			case '1' : one++; break;
			case '2' : two++; break;
			case '3' : three++; break;
			case '4' : four++; break;
			case '5' : five++; break;
			case '6' : six++; break;
			case '7' : seven++; break;
			case '8' : eight++; break;
			case '9' : nine++; break;
		}
	}
				
	std::cout << zero << std::endl;
	std::cout << one << std::endl;
	std::cout << two << std::endl;
	std::cout << three << std::endl;
	std::cout << four << std::endl;
	std::cout << five << std::endl;
	std::cout << six << std::endl;
	std::cout << seven << std::endl;
	std::cout << eight << std::endl;
	std::cout << nine << std::endl;

	return 0;
}
