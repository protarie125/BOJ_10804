#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto v = vector<int>{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (auto i = 0; i < 10; ++i) {
		int a, b;
		cin >> a >> b;

		reverse(v.begin() + a - 1, v.begin() + b);
	}

	for (const auto& x : v) {
		cout << x << ' ';
	}

	return 0;
}