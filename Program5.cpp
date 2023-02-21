//Program 5: Implement various types of constructors in a class
#include<iostream>
using namespace std;

class demo_constructor{
	private:
		int x, y, z;
		int* dynamic; 
	public:
		//(a) No argument constructor
		demo_constructor(){
			x = 0;
			y = 0;
			cout << "No-argument constructor called!\n";
		}
		//(b) One argument constructor
		demo_constructor(int x){
			x = x;
			y = 0;
			cout << "One-argument constructor called!\n";
		}
		//(c) Two argument constructor
		demo_constructor(int x, int y){
			x = x;
			y = y;
			cout << "Two-argument constructor called!\n";
		}
		//(d) Copy constructor
		demo_constructor(const demo_constructor& c1){
			x = c1.x;
			y = c1.y;
			cout << "Copy constructor called!\n";
		}
		//(e) Dynamic constructor
		demo_constructor(int x, int y, int z){
			dynamic = new int[3]{x,y,z};
			cout << "Dynamic-argument constructor called!\n";
		}
};
 int main(){
 	demo_constructor();
 	demo_constructor(4);
	demo_constructor(4,5);
	
	demo_constructor obj1(3,4);
	demo_constructor obj2 = obj1; 
	
	demo_constructor(4,5,6);
	
	return 0; 
 }
 
