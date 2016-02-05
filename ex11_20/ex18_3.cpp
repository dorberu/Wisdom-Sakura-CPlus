#include<iostream>
using namespace std;

void Kitty(char *name , int age = 15) {
	cout << "名前 : " << name << "\t年齢 : " << age << '\n';
}

int main() {
	Kitty("Rena");
	Kitty("Sakura" , 11);
	return 0;
}
