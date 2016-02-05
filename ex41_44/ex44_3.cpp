#include<iostream>

int main() {
	union {
		int i;
		char ch;
	};
	i = 0;	//初期化

	ch = 'A';
	std::cout << i;

	return 0;
}
