#include<iostream>
using namespace std;

class Kitty {
public:
	virtual void func() { cout << "Kitty on your lap\n"; }
} obj ;

class Chobits : public Kitty {
public:
	void toString() {  cout << "Chobits\n"; }
};

int main() {
	Chobits *po = dynamic_cast <Chobits *> (&obj);

	if (!po) {
		cout << "型キャストに失敗しました";
		return 1;
	}

	po->toString();	
	return 0;
}
