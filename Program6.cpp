//Program 6: Implement Multilevel Inheritance

#include <iostream>
using namespace std;

class Student{
	public:
		void Name(){
			cout << "Student's Name is Rohan.\n";
		}
};

class Course: public Student{
	public:
		void Subject(){
			cout << "He has opted C++ Programming.\n";
		}
};

class Result: public Course{
	public:
		void Marks(){
			cout << "He has scored 96 marks out of 100.\n";
		}
}; 

int main(){
	Result info;
	info.Name();
	info.Subject();
	info.Marks();
	return 0;
}



