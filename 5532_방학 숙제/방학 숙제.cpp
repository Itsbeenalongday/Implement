#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	double l, a, b, c, d;
	cin >> l >> a >> b >> c >> d;
	int ans = (int)(max(ceil(a / c), ceil(b / d)));
	cout << (int)(l - ans) << '\n';
	return 0;
}