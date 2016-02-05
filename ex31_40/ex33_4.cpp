#include <iostream>
using namespace std;

template <class X> void println(X out) {
	cout << out << '\n';
}

void println(float out) {
	cout << 'F' << out << '\n';
}

int main() {
	println("Kitty on your lap");
	println(56.025f);
	println(100.01);

	return 0;
}
