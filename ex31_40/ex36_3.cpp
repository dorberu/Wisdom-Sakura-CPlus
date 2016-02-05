#include<iostream>
// error: typeid を使う前に #include <typeinfo> としないといけません
#include<typeinfo>
using namespace std;

class Kitty {};

int main() {
	Kitty obj;

	if (typeid ( Kitty ) == typeid (obj))
		cout << "Kitty on your lap";
	return 0;
}
