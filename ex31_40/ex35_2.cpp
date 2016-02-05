#include <iostream>
using namespace std;

int main() {
	try {
		throw "Exception : Kitty on your lap\n";
		cout << "Di Gi Gharat";
	}
	catch (int e) { cout << e; }
	cout << "Kitty on your lap";

	return 0;
}
