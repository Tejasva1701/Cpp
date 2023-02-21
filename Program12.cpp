//Program 12: Demonstrate the use of STL in C++

#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(){
	vector<int> v;
	for (int i=1; i<10; i++){
		v.push_back(i);
	}
	
	cout << "Size: "<< v.size() << endl;
	
	cout << "Elements of vector: ";
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
	
	v.resize(6);
	cout << "Size after resizing the vector: " << v.size() << endl;
	
	v.pop_back();
	cout << "Element popped from the vector." << endl;
	cout << "New size: " << v.size() << endl;
	
	vector<int>::iterator i;
	cout << "Elements of vector: ";
	for (i = v.begin(); i < v.end(); i++){
		cout << *i << " ";
	}
	cout << endl << endl;
	
	int a = 10;
	int b = 20;
	
	cout << "Before Swapping" << endl;
	cout << "Value of a = " << a << "\n" << "Value of b = " << b << endl;
	swap(a,b);
	cout << "After Swapping" << endl;
	cout << "Value of a = " << a << "\n" << "Value of b = " << b << endl; 
	return 0;
	
}
