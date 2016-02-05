#include<iostream>
using namespace std;

void Kitty() {
	try { throw "Kitty on your lap\n"; }
	catch (char *) {
		cout << "Exception : Kitty()\n";
		throw;
		cout << "Kitty()\n"; //無視
	}
}

int main() {
	try { Kitty(); }
	catch (char *) { cout << "Exception : main()\n"; }
	return 0;
}
