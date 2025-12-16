#include<bits/stdc++.h>
using namespace std;
bool isprime(int num) {
	if (num == 1) return false;
	if (num == 2) return true;
	for (int i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) return false;
	}
	return true;
}
bool ok(int x, int y) {
	for (int i = x; i <= y; i++) {
		int ans = i * i + i + 41;
		if (!isprime(ans)) return false;
	}
	return true;
}
int main() {
	int x, y;
	while (cin >> x >> y &&(x||y)) {
		if (ok(x, y)) cout << "OK" << endl;
		else cout << "Sorry" << endl;
	}
	return 0;
}
