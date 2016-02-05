#include<iostream>
using namespace std;

void Kitty(char *str) {
	cout << "名前 : " << str << '\n';
}

void Kitty(char *str , int age = 15) {
	cout << "名前 : " << str << "\t年齢 : " << age << '\n';
}

int main() {
	Kitty("Rena");
	return 0;
}
