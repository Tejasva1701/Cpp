//Program 9: Implement Polymorphism using virtual function

#include <iostream>
using namespace std;

class Parent{
	public:
		virtual void sum(){
			cout << "Sum of integer values\n";
		}
};

class Two : public Parent{
	public:
		int a,b;
		void sum(){
			cout << "Sum of Two integer values\n";
			cout << "Enter number 1: ";
			cin  >> a;
			cout << "Enter number 2: ";
			cin  >> b;
			cout << "Sum of a and b is " << (a+b) <<endl;
		}
};

class Three : public Parent{
	public:
		int a,b,c;
		void sum(){
			cout << endl << "Sum of Three integer values\n";
			cout << "Enter number 1: ";
			cin  >> a;
			cout << "Enter number 2: ";
			cin  >> b;
			cout << "Enter number 3: ";
			cin  >> c;
			cout << "Sum of a, b, and c is " << (a+b+c) <<endl;
		}
};

int main(){
	Two t;
	Parent *p = &t;
	p->sum();
	
	Three th;
	p =&th;
	p->sum(); 
	
	return 0;
}


