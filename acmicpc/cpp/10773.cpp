#include <iostream>
#include <stack>

int main() {
	std::stack<int> st;
	int n = 0;
	int sum = 0;

	std::cin >> n;

	for(int i = 0; i < n; i++) {
		int num = 0;
		std::cin >> num;

		if(num == 0) {
			if(!st.empty()) {
				st.pop();
			}
		} else {
			st.push(num);
		}
	}

	while(!st.empty()) {
		sum += st.top();
		st.pop();
	}

	std::cout << sum << std::endl;

	return 0;
}
