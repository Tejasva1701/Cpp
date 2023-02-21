//Program 7: Implement Multiple Inheritence

#include <iostream>
using namespace std;

class A{
	protected:
		int num1;
	public:
		void set_num1(int a){
			num1 = a;
		}
};

class B{
	protected:
		int num2;
	public:
		void set_num2(int b){
			num2 = b;
		}
};

class C{
	protected:
		int num3;
	public:
		void set_num3(int c){
			num3 = c;
		}
};

class D: public A, public B, public C{
	public:
		void sum(){
			cout << "Number 1: " << num1 << endl;
			cout << "Number 2: " << num2 << endl;
			cout << "Number 3: " << num3 << endl;
			cout << "Total Sum is :" << num1 + num2 + num3 << endl;
		}
};

int main(){
	D value;
	value.set_num1(2);
	value.set_num2(7);
	value.set_num3(9);
	value.sum();
	
	return 0;
}


