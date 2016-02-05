#include<iostream>
using namespace std;

void Chobits() {
	throw 10.1;
}

void Kitty() throw ( int , char *) {
	Chobits();
}

int main() {
	try { Kitty(); }
	catch (...) { cout << "Exception"; }
	return 0;
}
