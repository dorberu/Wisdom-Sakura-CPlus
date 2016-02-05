#include <iostream>
using namespace std;

class Base {
public:
	virtual void paint() = 0;
} obj ;	//抽象クラスのオブジェクトは作れない

class Kitty : public Base {
	//純粋仮想関数 paint() をオーバーライドしていない
} obj1;

int main() {
	return 0;
}
