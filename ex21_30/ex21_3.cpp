#include<iostream>
using namespace std;

class Base {
public:
	char *str;
} b_obj ;

class Derived : private Base {
public:
	void setStr(char *str) { this->str = str; }
	void printStr() { cout << str; }
} d_obj ;

int main() {
	b_obj.str = "Card Captor Sakura\n";		//アクセス可能
	cout << b_obj.str;

	d_obj.setStr("Kitty on your lap\n");	//d_obj.str はアクセスできない
	d_obj.printStr();
	return 0;
}
