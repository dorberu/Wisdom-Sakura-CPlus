#include <iostream>
using namespace std;

/*C++では、voidを省略できる*/
void func();

void func() {
	cout << "Kitty on your lap";
}

int main() {
	func();
	return 0;
}
