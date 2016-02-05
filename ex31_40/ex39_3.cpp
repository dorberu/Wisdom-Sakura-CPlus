#include<iostream>
using namespace std;

namespace Kitten {
	void Kitty() {
		cout << "Kitty on your lap\n";
	}
}

int main() {
	using namespace Kitten;
	Kitty();
	cout << "Chobits\n";

	return 0;
}
