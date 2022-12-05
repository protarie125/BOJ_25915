#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	char now;
	cin >> now;

	const auto& str = "ILOVEYONSEI"s;

	auto ans = int{ 0 };
	for (const auto& x : str) {
		ans += abs(x - now);
		now = x;
	}

	cout << ans;

	return 0;
}