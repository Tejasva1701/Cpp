//Program 3: Implement function overloading for user defined Power function

#include <iostream>
#include <cmath>
using namespace std;


void Power(int m, int n){
	cout << m << " to a power of " << n << " is : " << pow(m,n) << endl;
	return;
}

void Power(double m, int n){
	cout << m << " to a power of " << n << " is : " << pow(m,n) << endl;
	return;
}

int main(){
	Power(2,4);
	Power(2.5,4);
	return 0;
}


