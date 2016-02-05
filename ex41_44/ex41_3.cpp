#include<iostream>
using std::cout;

class Math {
public:
	// error: ISO C++ forbids declaration of ‘max’ with no type
	static int max(int var1 , int var2) {
		if (var1 > var2) return var1;
		else return var2;
	}
};

int main() {
	cout << Math::max(100 , 101);
	return 0;
}
