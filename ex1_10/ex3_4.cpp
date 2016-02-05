/*test.cpp*/
#include <iostream>
using namespace std;

int func() {
	cout << "Kitty on your lap";
	return;		/*コンパイルエラーが出る*/
}

int main() {
	func();
	return 0;
}
