#include<iostream>
using namespace std;

class Neko;

class Kitty {
	char *str;
public:
	// error: a class-key must be used when declaring a friend
	// error: friend declaration does not name a class or function
	// フレンドクラスとして宣言するときはclassキーをつける必要があるらしい
	friend class Neko;
	Kitty(char *str) { Kitty::str = str; }
} obj("Kitty on your lap");

class Neko {
public:
	Neko(Kitty &obj) {
		cout << obj.str << '\n';
	}
};

int main() {
	Neko obj(::obj);
	return 0;
}
