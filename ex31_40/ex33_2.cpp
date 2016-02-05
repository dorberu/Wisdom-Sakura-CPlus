#include <iostream>
using namespace std;

template <typename X>

// 関数名がmaxだとエラーとなる
X temp_max(X var1 , X var2) {
	if (var1 > var2) return var1;
	else return var2;
}

int main() {
	cout << temp_max(10 , 100);

	return 0;
}
