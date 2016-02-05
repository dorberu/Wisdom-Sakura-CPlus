#include <iostream>
using namespace std;

int main() {
	try {
		throw "Exception : Kitty on your lap\n";
		cout << "Di Gi Gharat";
	}
	catch (char *str) {
		cout << str;
	}

	return 0;
}
