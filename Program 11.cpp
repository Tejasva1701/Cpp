//Program 11: Implement Exception Handling

#include <iostream>
using namespace std;

int Divide(int a, int b){
	if (b == 0){
		throw 1;
	}
	return (a/b);
}

int main(){
	int num1, num2, result;
	
	cout << "Enter number 1: ";
	cin  >> num1;
	cout << "Enter number 2: ";
	cin  >> num2;
	
	try{
		result = Divide(num1,num2);
		cout << "Result : " << result << endl;
	} 
	
	catch(int e){
		cout << "Error! Division by ZERO! " << e << endl;
	}
	return 0;
}



