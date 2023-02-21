//Program 1: Implement Call by Value and Call by reference. Using Call by reference to swap two integer values

#include <iostream>
using namespace std;

void Call_by_Value(int a){
	a = 10;
	cout << "The Value of a in function is : " << a << endl;
	return;	
}

void Call_by_reference(int &b){
	b = 30;
	cout << "The Value of b in function is : " << b << endl;
	return;	
}

void Swap(int &x, int &y){
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int main(){
	int a = 20;
	int b = 40;
	int x = 5, y = 3;
	cout << "---------Call By Value---------\n";
	cout << "The Original Value is : " << a << endl;
	Call_by_Value(a);
	cout << "The Value of a after function is over : " << a << "\n\n\n";
	
	cout << "-------Call By Reference-------\n";
	cout << "The Original Value is : " << b <<endl;
	Call_by_reference(b);
	cout << "The Value of b after function is over : " << b << "\n\n\n";
	
	cout << "---Swapping two integer values---\n";
	cout << "Before Swapping" << endl;
	cout << "Value of x: " << x << "\n" << "Value of y: " << y << "\n\n";
	Swap(x,y);
	cout << "After Swapping" << endl;
	cout << "Value of x: " << x << "\n" << "Value of y: " << y << "\n\n";
	
	return 0;
}

