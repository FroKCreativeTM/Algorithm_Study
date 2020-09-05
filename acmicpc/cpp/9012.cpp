#include <iostream>
#include <string>
#include <stack>

int main() {
	int n = 0;
	std::string str;
	std::stack<char> st;

	std::cin >> n;

	for(int i = 0; i < n; i++) {
		std::cin >> str;

		for(int j = 0; j < str.size(); j++) {
			if(str[j] == '(') {
				st.push('(');
			} else if(str[j] == ')') {
				if(st.empty()) {
					std::cout << "NO" << std::endl;
				} else {
					st.pop();
				}
			}
		}
		str.clear();
		while(!st.empty()) {
			st.pop();
		}
	}
}
