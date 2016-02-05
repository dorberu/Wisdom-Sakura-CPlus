#include <iostream>
using namespace std;

template <class X> void println(X out) {
	cout << out << '\n';
}

int main() {
	println("Kitty on your lap");
	println(10);
	println(1.052);

	return 0;
}
